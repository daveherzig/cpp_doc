#include "binarysearch.h"

int BinarySearch::search(
  int value, const vector<int> & data, int index) {
  int leftIndex = 0;
  int rightIndex = data.size();
  
  while (leftIndex <= rightIndex) {
    int middleIndex = (leftIndex + rightIndex) / 2;
    if (data[middleIndex] == value) {
      return middleIndex;
    } else if (data[middleIndex] < value) {
      leftIndex = middleIndex+1;
    } else if (data[middleIndex] > value) {
      rightIndex = middleIndex-1;
    }
  }
  return -1;
}
