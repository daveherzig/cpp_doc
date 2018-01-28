#ifndef SEARCH_H
#define SEARCH_H

#include<vector>
using namespace std;

class Search {
public:
  virtual int search(int value, const vector<int> & data, int index = 0) = 0;
};

#endif
