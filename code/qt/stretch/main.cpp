#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QDebug>
#include <QSizePolicy>

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  QWidget *widget = new QWidget();
  QHBoxLayout *hbox = new QHBoxLayout();
  QPushButton *button = new QPushButton("Push Me");
  QLineEdit *input = new QLineEdit();
  hbox->addWidget(button);
  hbox->addWidget(input);
  widget->setLayout(hbox);
  widget->show();

  QSizePolicy sp = button->sizePolicy();
  sp.setVerticalPolicy(QSizePolicy::Expanding);
  button->setSizePolicy(sp);

  qDebug() << "Button: " << button->sizePolicy().expandingDirections();
  qDebug() << "Input: " << input->sizePolicy().expandingDirections();

  return app.exec();
}
