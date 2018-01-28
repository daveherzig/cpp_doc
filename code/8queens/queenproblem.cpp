#include "queenproblem.h"

#include "chessboard.h"

int QueenProblem::solutionCounter = 0;

void QueenProblem::solve(ChessBoard & cb) {
  solutionCounter = 0;
  solve(cb, 0);
}

void QueenProblem::solve(ChessBoard & cb, int col) {
  if (col >= 8) {
    cb.print();
    solutionCounter++;
    return;
  }

  for (int i=0; i<8; i++) {
    cb.setQueen(i, col);
    if (cb.checkQueens()) {
      solve(cb, col+1);
    }
    cb.removeQueen(i, col);
  }
}
