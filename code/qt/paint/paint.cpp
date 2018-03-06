class MyWidget : public QWidget {
public:
  void paintEvent(QPaintEvent *event);
  ...
};

void MyWidget::paintEvent(QPaintEvent *event) {
  QPainter painter(this);
  painter.drawLine(20, 20, 100, 125);
  ...
}
