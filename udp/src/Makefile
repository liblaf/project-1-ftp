CXX = clang++
BIN_PATH = $(PWD)/bin

all: before_build client server

before_build:
	mkdir --parents $(BIN_PATH)

clean:
	rm --force --recursive $(BIN_PATH)

%: %.cc
	$(CXX) $^ -o $(BIN_PATH)/$@
