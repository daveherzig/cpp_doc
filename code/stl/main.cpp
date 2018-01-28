#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include <algorithm>
#include <stack>
#include <list>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv) {

  deque<int> c1;
  vector<int> c2;
  list<int> c3;
  
  // insert at the end
  c1.push_back(rand());
  c2.push_back(rand());
  c3.push_back(rand());
  
  // insert at the start
  c1.push_front(rand());
  // c2.push_front not possible
  c3.push_front(rand());
  
  // insert at a specific position
  list<int>::iterator iter3 = c3.begin();
  iter3++;
  c3.insert(iter3, rand());
  
  // delete at a specific position
  vector<int>::iterator iter2 = c2.begin();
  c2.erase(iter2);
  
  // loop through elements
  deque<int>::iterator iter1;
  for (iter1=c1.begin(); iter1!=c1.end(); iter1++) {
    cout << *iter1 << endl;
  }
  
  map<int, string> employeeMap;
  
  // insert
  employeeMap[0] = "HERZIG";
  employeeMap[1] = "BALE";
  employeeMap[0] = "WAYNE"; // old value will be overwritten
  
  pair<map<int, string>::iterator, bool> ret;
  ret = employeeMap.insert(pair<int, string>(2, "PARKER"));
  // ret.second is true
  ret = employeeMap.insert(pair<int, string>(2, "CLARK"));
  // ret.second is false, because key 2 already exists
  
  // loop through elements
  map<int, string>::iterator iter;
  for (iter=employeeMap.begin(); iter!=employeeMap.end(); iter++) {
    int key = iter->first;
	string value = iter->second;
  }
  
  
  
  

  return 0;
}
