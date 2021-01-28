#include <iostream>

int main() {
  int A_matrix[3][2] = {{1, 3},
                        {5, 7},
                        {9, 11}};

  int B_matrix[3][2] = {{2, 4},
                        {6, 8},
                        {10, 12}};

  std::cout << "// A Matrix" << std::endl;
  // print A Matrix
  for(int i = 0; i < 3; i++) {
    std::cout << " [ ";
    for(int j = 0; j < 2; j++) {
      std::cout << A_matrix[i][j] << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
  }

  std::cout << "\n// B Matrix" << std::endl;
  // print B Matrix
  for(int i = 0; i < 3; i++) {
    std::cout << " [ ";
    for(int j = 0; j < 2; j++) {
      std::cout << B_matrix[i][j] << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
  }

  // R matrix to store addition of A matrix + B matrix
  int R_matrix[3][2] = {{0, 0},
                        {0, 0},
                        {0, 0}};

  /* expected output :
  [ 2 12 ]
  [ 30 56 ]
  [ 90 132 ] */
  
  std::cout << std::endl;
  // iterate through rows
  for(int i = 0; i < 3; i++) {
    // iterate thorugh columns
    for(int j = 0; j < 2; j++) {
      R_matrix[i][j] = A_matrix[i][j] * B_matrix[i][j];
    }
  }

  std::cout << "\n// MATRIX R = MATRIX A + MATRIX B" << std::endl;
  std::cout << "// R Matrix" << std::endl;
  // print matrix R
  // iterate through rows
  for(int i = 0; i < 3; i++) {
    std::cout << " [ ";
    // iterate thorugh columns
    for(int j = 0; j < 2; j++) {
      std::cout << R_matrix[i][j] << " ";
    }
    std::cout << "]";
    std::cout << std::endl;
  }

  return 0;
}
