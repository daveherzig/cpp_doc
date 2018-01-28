#include <QApplication>
#include <QDial>
#include <QLCDNumber>
#include <QSlider>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  QDial *dial = new QDial();
  dial->show();

  QLCDNumber *lcdnumber = new QLCDNumber();
  lcdnumber->display(12345);
  lcdnumber->show();

  QSlider *slider = new QSlider(Qt::Horizontal);
  slider->show();
  
  QHBoxLayout *hbox = new QHBoxLayout();
  QPushButton *button = new QPushButton("Push Me");
  QLineEdit *input = new QLineEdit();
  hbox->addWidget(button);
  hbox->addWidget(input);
  QWidget *widget = new QWidget();
  widget->setLayout(hbox);
  widget->show();

  return app.exec();
}
