#include "chessboard.h"

#include <iostream>
using namespace std;

ChessBoard::ChessBoard() {
  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      data[i][j] = false;
    }
  }
}

void ChessBoard::print() {
  cout << "****" << endl;
  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      cout << data[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "****" << endl;
}

void ChessBoard::setQueen(int row, int col) {
  data[row][col] = true;
}

void ChessBoard::removeQueen(int row, int col) {
  data[row][col] = false;
}

bool ChessBoard::isQueen(int row, int col) {
  return data[row][col];
}

bool ChessBoard::checkQueens() {
  int row[8] = {0};
  int col[8] = {0};
  int dia1[15] = {0};
  int dia2[15] = {0};

  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      if (data[i][j]) {
        row[i] += 1;
		col[j] += 1;
		dia1[i+j] += 1;
		dia2[i-j+7] += 1;
      }
    }
  }
  
  for (int i=0; i<8; i++) {
    if (row[i] > 1) return false;
	if (col[i] > 1) return false;
  }
  
  for (int i=0; i<15; i++) {
    if (dia1[i] > 1) return false;
	if (dia2[i] > 1) return false;
  }
  
  return true;
}

