int main(int argc, char **argv) {
  const int NUMBER_OF_ROWS = 2;
  const int NUMBER_OF_COLUMNS = 3;

  int matrix[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
  for (int i=0; i<NUMBER_OF_ROWS; i++) {
    for (int j=0; j<NUMBER_OF_COLUMNS; j++) {
      matrix[i][j] = rand();
    }
  }

  return 0;
}
