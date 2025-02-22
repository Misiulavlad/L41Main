#include "util.h"

int main() {
    int matrix[N][N];
    init_rand(matrix);
    print_matrix(matrix);
    cout << "Sum: " << sum(matrix) << endl;
    return 0;
}