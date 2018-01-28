#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv) {
  QApplication qApplication(argc, argv);
  QPushButton *button =
    new QPushButton("Push Me");
  button->show();
  return qApplication.exec();
}
