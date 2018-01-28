#include "mergesort.h"

void MergeSort::sort(vector<int>& v) {

  // ABORT
  if (v.size() <= 1) return;

  vector<int> left;
  vector<int> right;

  // DIVIDE
  int i;
  for (i=0; i<v.size()/2; i++) {
    left.push_back(v[i]);
  }
  for (; i<v.size(); i++) {
    right.push_back(v[i]);
  }

  // CONQUER
  sort(left);
  sort(right);

  // MERGE
  int indexLeft = 0, indexRight = 0, index = 0;
  while (index < v.size()) {
    if (indexLeft >= left.size()) {
      v[index] = right[indexRight];
      indexRight++;
    } else if (indexRight >= right.size()) {
      v[index] = left[indexLeft];
      indexLeft++;
    } else if (left[indexLeft] > right[indexRight]) {
      v[index] = right[indexRight];
      indexRight++;
    } else {
      v[index] = left[indexLeft];
      indexLeft++;
    }
    index++;
  }
}
