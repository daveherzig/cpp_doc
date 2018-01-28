#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class QLabel;
class QPushButton;
class QLineEdit;

class MyWidget : public QWidget {
private:
  QLabel *titleLabel;
  QLabel *textLabel;
  QPushButton *okButton;
  QLineEdit *inputLineEdit;
public:
  MyWidget();
};

#endif
