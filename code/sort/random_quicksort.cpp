#include "quicksort.h"
#include <cstdlib>
using namespace std;

void QuickSort::sort(vector<int>& v) {

  // ABORT
  if (v.size() <= 1) return;

  swap(v[v.size()-1], v[rand() % v.size()]);
  int pivot = v[v.size()-1];
  vector<int> left;
  vector<int> right;

  // DIVIDE
  for (int i=0; i<v.size()-1; i++) {
    if (v[i] < pivot) left.push_back(v[i]);
    else right.push_back(v[i]);
  }

  // CONQUER
  sort(left);
  sort(right);

  // MERGE
  for (int i=0; i<left.size(); i++) {
    v[i] = left[i];
  }
  v[left.size()] = pivot;
  for (int i=0; i<right.size(); i++) {
    v[left.size()+i+1] = right[i];
  }
}
