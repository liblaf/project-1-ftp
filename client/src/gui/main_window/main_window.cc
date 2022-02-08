#include "main_window.h"

#include "./ui_main_window.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui_(new Ui::MainWindow) {
  this->ui_->setupUi(this);
}

MainWindow::~MainWindow() { delete this->ui_; }
