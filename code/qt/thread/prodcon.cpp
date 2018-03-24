DataContainer::DataContainer() : available(false) {
  mutex = new QMutex();
  waitCondition = new QWaitCondition();
}

void DataContainer::setValue(int value) {
  QMutexLocker locker(mutex);
  while (available) {
    waitCondition->wait(mutex);
  }
  this->value = value;
  available = true;
  waitCondition->wakeAll();
}

int DataContainer::getValue() {
  QMutexLocker locker(mutex);
  while (!available) {
    waitCondition->wait(mutex);
  }
  available = false;
  waitCondition->wakeAll();
  return value;
}
