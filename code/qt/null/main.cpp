#include <QApplication>

#include "mywidget.h"

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  MyWidget *myWidget = new MyWidget();
  myWidget->show();
  return app.exec();
}

