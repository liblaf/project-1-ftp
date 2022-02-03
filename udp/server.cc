#include <arpa/inet.h> // IP address conversion stuff
#include <ctype.h>
#include <netdb.h>      // gethostbyname
#include <netinet/in.h> // INET constants and stuff
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h> // socket specific definitions
#include <sys/types.h>  // system data type definitions
#include <unistd.h>     // defines STDIN_FILENO, system calls, etc

#include <string>

#define MAXBUF 1024 * 1024

int Process(char *p, const int n) {
  static int sequence_number = 0;
  char *res = new char[64];
  sprintf(res, "%d ", sequence_number++);
  int len = strlen(res);
  memmove(p + len, p, n);
  memcpy(p, res, len);
  delete[] res;
  return n + len;
}

void Echo(int sd) {
  char bufin[MAXBUF];
  struct sockaddr_in remote;

  // need to know how big address struct is, len must be set before the call to
  // recvfrom!!!
  socklen_t len = sizeof(remote);

  while (1) {
    // read a datagram from the socket (put result in `bufin`)
    int n = recvfrom(sd, bufin, MAXBUF, 0, (struct sockaddr *)&remote, &len);

    if (n < 0) {
      perror("recvfrom()");
    } else {
      n += Process(bufin, n);
      // Got something, just send it back
      sendto(sd, bufin, n, 0, (struct sockaddr *)&remote, len);
    }
  }
}

// server main routine

int main() {
  int ld;
  struct sockaddr_in sockaddr;
  socklen_t length;

  // create a socket
  // IP protocol family (PF_INET)
  // UDP protocol (SOCK_DGRAM)

  ld = socket(PF_INET, SOCK_DGRAM, 0);
  if (ld < 0) {
    perror("socket()");
    exit(1);
  }

  // establish our address
  // address family is AF_INET
  // our IP address is INADDR_ANY (any of our IP addresses)
  // the port number is 9876

  sockaddr.sin_family = AF_INET;
  sockaddr.sin_addr.s_addr = htonl(INADDR_ANY);
  sockaddr.sin_port = htons(9876);

  if (bind(ld, (struct sockaddr *)&sockaddr, sizeof(sockaddr)) < 0) {
    perror("bind()");
    exit(0);
  }

  // find out what port we were assigned and print it out

  length = sizeof(sockaddr);
  if (getsockname(ld, (struct sockaddr *)&sockaddr, &length) < 0) {
    perror("getsockname()");
    exit(1);
  }

  // Go echo every datagram we get
  Echo(ld);
  return 0;
}
