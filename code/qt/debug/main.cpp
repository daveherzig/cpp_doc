#include <QApplication>
#include <QDebug>

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  qDebug() << "Some debug output...";
  qWarning() << "Some warning output...";
  qCritical() << "Some critical output...";
  return app.exec();
}
