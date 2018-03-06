#include <QApplication>
#include <QPaintEvent>
#include <QPainter>
#include <QWidget>

class MyWidget : public QWidget {
public:
  void paintEvent(QPaintEvent *event);
};

void MyWidget::paintEvent(QPaintEvent *event) {
  QPainter painter(this);
  painter.drawRect(0, 0, width()-1, height()-1);

  int NUMBER_OF_LINES = 50;
  float dx = width() / (float)NUMBER_OF_LINES;
  float dy = height() / (float)NUMBER_OF_LINES;
  for (int i=0; i<NUMBER_OF_LINES; i++) {
    painter.drawLine(0, 0, (i+1)*dx, height());
    painter.drawLine(0, 0, width(), (i+1)*dy);
    painter.drawLine(width(), height(), (i+1)*dx, 0); 
    painter.drawLine(width(), height(), 0, (i+1)*dy);
  }


}

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  MyWidget *w = new MyWidget();
  w->show();
  return app.exec();
}
