#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
  ifstream file;
  file.open("filename.txt", ios::in);
  if (!file.is_open()) {
    // could not open file
    // e.g. file does not exist, permissions
    // do some exception handling
  }

  // process file line by line
  string line;
  while (getline(file, line)) {
    cout << line << endl;
  }

  file.close();
}
