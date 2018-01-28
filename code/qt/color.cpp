QLineEdit *myLineEdit = new QLineEdit();
QPalette p = myLineEdit->palette();
p.setColor(QPalette::Normal,
  QPalette::Base, Qt::lightGray);
myLineEdit->setPalette(p);
