#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "search.h"

class BinarySearch : public Search {
public:
  virtual int search(int value, const vector<int> & data, int index = 0);
};

#endif