#include "chessboard.h"
#include "queenproblem.h"

#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  ChessBoard cb;

  QueenProblem::solve(cb);
  
  cout << "Number of Solutions: " << QueenProblem::solutionCounter << endl;

  return 0;
}
