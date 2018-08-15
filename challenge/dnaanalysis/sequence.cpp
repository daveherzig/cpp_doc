#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class FastaReader {
public:
  static string read(const string & file, bool & success);
};

string FastaReader::read(const string & file, bool & success) {
  ifstream fs(file);
  if (!fs) {
    success = false;
    return "";
  }
  success = true;
  string result = "", line;
  while (getline(fs, line)) {
    if (line.at(0) != '>') {
      result += line;
    }
  }
  return result;
}

char analyzeSequence(string sequence) {
  // return the nucleotide which appears most
}

int main(int argc, char **argv) {

  // TASKS
  // 1. Read the sample.fa file
  // 2. Print the length of the sample sequence
  // 3. Implement the method analyzeSequence and find out which nucleotide
  //    appears most
  // 4. Read the Human Chromosome 1 Sequence (download the file from NCBI)
  // 5. Print the length of the sequence
  // 6. Run your algorithm on the human sequence


  return 0;
}
