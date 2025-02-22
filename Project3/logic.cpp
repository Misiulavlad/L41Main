#include "util.h"
void init_rand(int matrix[N][N]) {
	srand(time(0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % 101;
		}
	}
}

void print_matrix(int matrix[N][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int sum(int matrix[N][N]) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			sum += matrix[i][j];
		}
	
	}
	return sum;
}