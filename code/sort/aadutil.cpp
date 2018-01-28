#include "aadutil.h"

#include <cstdlib>

vector<int> AADUtil::createRandomValues(int n) {
  // create random vector
  vector<int> result;
  for (int i=0; i<n; i++) {
    result.push_back(rand()*rand());
  }
  return result;
}
