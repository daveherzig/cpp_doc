#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "search.h"

class LinearSearch : public Search {
public:
  virtual int search(int value, const vector<int> & data, int index = 0);
};

#endif