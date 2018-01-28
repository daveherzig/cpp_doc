// create objects
QLabel titleLabel = new QLabel("<h1>TITLE</h1>", this);
QLabel textLabel = new QLabel("TEXT", this);
QPushButton okButton = new QPushButton("OK", this);
QLineEdit inputLineEdit = new QLineEdit(this);

// create Layout
titleLabel->setGeometry(10, 10, 100, 40);
textLabel->setGeometry(50, 100, 100, 40);
okButton->setGeometry(10, 150, 300, 50);
inputLineEdit->setGeometry(140, 20, 80, 25);
