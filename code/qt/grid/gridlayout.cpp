int main(int argc, char *argv[]){
  QApplication app(argc, argv);

  QWidget *mainWidget = new QWidget();

  QPushButton *button1 = new QPushButton("Button 1");
  QPushButton *button2 = new QPushButton("Button 2");
  QLineEdit *lineEdit1 = new QLineEdit();
  QLineEdit *lineEdit2 = new QLineEdit();

  QGridLayout *gridLayout = new QGridLayout();
  gridLayout->addWidget(button1, 0, 0); gridLayout->addWidget(lineEdit1, 0, 1);
  gridLayout->addWidget(button2, 1, 0); gridLayout->addWidget(lineEdit2, 1, 1);

  mainWidget->setLayout(gridLayout);

  mainWidget->show();
  return app.exec();
}