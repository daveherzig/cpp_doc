QPushButton *button1 = new QPushButton("Button 1");
QPushButton *button2 = new QPushButton("Button 2");
QLineEdit *lineEdit1 = new QLineEdit();
QLineEdit *lineEdit2 = new QLineEdit();

QFormLayout *formLayout = new QFormLayout();
formLayout->addRow("Button 1 Label", button1);
formLayout->addRow("Button 2 Label", button2);
formLayout->addRow("LineEdit 1 Label", lineEdit1);
formLayout->addRow("LineEdit 2 Label", lineEdit2);

