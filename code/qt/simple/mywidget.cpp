#include "mywidget.h"

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

#include <QHBoxLayout>
#include <QVBoxLayout>

MyWidget::MyWidget() {

  // 1. Create Objects
  titleLabel = new QLabel("<h1>TITLE</h1>");
  textLabel = new QLabel("TEXT");
  okButton = new QPushButton("OK");
  inputLineEdit = new QLineEdit();

  // 2. Create Layout
  QVBoxLayout *vbox = new QVBoxLayout();
  QHBoxLayout *hbox = new QHBoxLayout();
  vbox->addWidget(titleLabel);
  hbox->addWidget(textLabel);
  hbox->addWidget(inputLineEdit);
  vbox->addLayout(hbox);
  vbox->addWidget(okButton);

  // 3. Set main layout
  setLayout(vbox);
}
