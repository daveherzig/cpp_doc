#include "linearsearch.h"

int LinearSearch::search(int value, const vector<int> & data, int index) {
  for (int i=index; i<data.size(); i++) {
    if (data[i] == value) {
	  return i;
	}
  }
  return -1;
}
