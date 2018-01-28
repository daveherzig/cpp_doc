#ifndef CHESSBOARD_H
#define CHESSBOARD_H

class ChessBoard {
private:
  bool data[8][8];
public:
  ChessBoard();
  void setQueen(int row, int col);
  void removeQueen(int row, int col);
  bool isQueen(int row, int col);
  bool checkQueens();
  void print();
};

#endif

