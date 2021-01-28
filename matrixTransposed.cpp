#include <iostream>

int main() {
  int A_matrix[3][2] = {{1, 2},
                        {3, 4},
                        {5, 6}};
  std::cout << "// 3x2 Matrix" << std::endl;
  // print 3x2 Matrix
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 2; j++) {
      std::cout << A_matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // R matrix to store transposed A matrix
  // turn 3x2 matrix to 2x3 matrix (transposing)
  int R_matrix[2][3] = {{0, 0, 0},
                        {0, 0, 0}};

  std::cout << std::endl;
  std::cout << "Transposed Matrix" << std::endl;
  // iterate through rows
  for(int i = 0; i < 3; i++) {
    // iterate thorugh columns
    for(int j = 0; j < 2; j++) {
      R_matrix[j][i] = A_matrix[i][j];
    }
  }

  // transposing and print the matrix
  // iterate through rows
  for(int i = 0; i < 2; i++) {
    // iterate thorugh columns
    for(int j = 0; j < 3; j++) {
      std::cout << R_matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
