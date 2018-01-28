#include "binarysearch.h"

int BinarySearch::search(
  int value, const vector<int> & data, int index) {
  return search(value, data, index, data.size());
}

int BinarySearch::search(
  int value, const vector<int> & data,
  int leftIndex, int rightIndex) {
  if (!(leftIndex <= rightIndex)) return -1;
  int middleIndex = (leftIndex + rightIndex) / 2;
  if (data[middleIndex] == value) {
    return middleIndex;
  } else if (data[middleIndex] < value) {
    return search(value, data, middleIndex+1, rightIndex);
  } else if (data[middleIndex] > value) {
    return search(value, data, leftIndex, middleIndex-1);
  } 
}
