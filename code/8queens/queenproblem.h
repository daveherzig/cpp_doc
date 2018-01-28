#ifndef QUEENPROBLEM_H
#define QUEENPROBLEM_H

class ChessBoard;

class QueenProblem {
public:
  static void solve(ChessBoard & cb);
  static int solutionCounter;
private:
  static void solve(ChessBoard & cb, int col);
};

#endif
