int main(int argc, char *argv[]){
  QApplication app(argc, argv);

  QWidget *mainWidget = new QWidget();

  QPushButton *button1 = new QPushButton("Button 1");
  QPushButton *button2 = new QPushButton("Button 2");
  QPushButton *button3 = new QPushButton("Button 3");

  QHBoxLayout *hBoxLayout = new QHBoxLayout();
  hBoxLayout->addWidget(button1);
  hBoxLayout->addWidget(button2);
  hBoxLayout->addWidget(button3);

  mainWidget->setLayout(hBoxLayout);

  mainWidget->show();
  return app.exec();
}