#include <iostream>

void rotate_matrix(int matrix[3][3], int size) {
    for (int layer = 0; layer < size / 2; ++layer) {
        int first = layer;
        int last = size - 1 - layer;
        for (int i = first; i < last; ++i) {
            int offset = i - first;
            int top = matrix[first][i];
            // left -> top
            matrix[first][i] = matrix[last - offset][first];

            // bottom -> left
            matrix[last - offset][first] = matrix[last][last - offset];

            // right -> bottom
            matrix[last][last - offset] = matrix[i][last];

            // top -> right
            matrix[i][last] = top;
        }
    }
}

void print_matrix(int matrix[3][3], int size) {
  for (int i = 0; i < size; ++i) {
    for(int j = 0; j < size; ++j) {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }  
}

int main() {
    int size = 3;
    int matrix[3][3] { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate_matrix(matrix, 3);
    print_matrix(matrix, 3);
}