QLineEdit *myLineEdit = new QLineEdit();
QIntValidator *validator = new QIntValidator();
validator->setRange(1, 9);
myLineEdit->setValidator(validator);
