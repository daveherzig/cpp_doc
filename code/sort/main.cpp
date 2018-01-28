#include "sort.h"
#include "selectionsort.h"
#include "quicksort.h"
#include "bubblesort.h"
#include "insertionsort.h"

#include "search.h"
#include "linearsearch.h"
#include "binarysearch.h"

#include "aadutil.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

const bool DISPLAY_VECTOR = false;
const bool DISPLAY_TIME = true;

void displayVector(const vector<int> &v) {
  if (!DISPLAY_VECTOR) return;
  for (int i=0; i<v.size(); i++) {
    cout << v.at(i) << ", ";
  }
  cout << endl;
}

void displayTime(clock_t start, clock_t stop) {
  if (!DISPLAY_TIME) return;
  cout << "Time [s] = "
       << (double)(stop-start)/CLOCKS_PER_SEC << endl;
}

void sort() {
  const int NUMBER_OF_ELEMENTS = 100000;
  vector<int> v = AADUtil::createRandomValues(NUMBER_OF_ELEMENTS);
  displayVector(v);

  // sortieren
  Sort *sorter = new QuickSort();
  
  clock_t start,stop;
  start = clock();
  sorter->sort(v);
  stop = clock();
  
  displayVector(v);
  displayTime(start, stop);
}

void search() {
  const int M = 1000000;
  const int N = 0.1 * M;
  
  vector<int> a = AADUtil::createRandomValues(M);
  vector<int> b;
  for (int i=0; i<N; i++) {
    int index = 0;
    index = rand()%M;
    b.push_back(a[index]);
  }
  
  // search values
  Search *searcher = new BinarySearch();
  Sort *sorter = new QuickSort();
  clock_t start,stop;
  start = clock();
  sorter->sort(a);
  for (int i=0; i<b.size(); i++) {
    searcher->search(b[i], a);
  }
  stop = clock();
  displayTime(start, stop);
}

int main(int argc, char **argv) {

  // sorting
  //sort();
  
  // searching
  search();

  return 0;
}

