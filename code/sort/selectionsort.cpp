#include "selectionsort.h"

#include <iostream>
using namespace std;

void SelectionSort::sort(vector<int> &v) {
  for (int i=0; i<v.size(); i++) {
    // search smallest element
    int minIndex = i;
    for (int j=i+1; j<v.size(); j++) {
      if (v[j] < v[minIndex]) {
        minIndex = j;
      }
    }
    // swap elements
    int tmp = v[i];
    v[i] = v[minIndex];
    v[minIndex] = tmp;
  }
}

