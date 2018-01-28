QLineEdit *myLineEdit = new QLineEdit();
bool *convertSuccessful;
int value = myLineEdit->text().toInt(convertSuccessful);
if (*convertSuccessful) {
  // line edit contains a valid integer value
} else {
  // line edit does NOT contain a valid integer value
}
