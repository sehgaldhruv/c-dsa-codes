#include <iostream>
#include <cmath>
using namespace std;

bool isSafeToPlace(int board[][9], int i, int j, int n, int number) {
	// Check karo row and column mei number nhi hona chahei
	for (int k = 0; k < n; k++) {
		if (board[i][k] == number || board[k][j] == number) {
			return false;
		}
	}

	// Chota box check krna wha number nhi hona chahei
	n = sqrt(n);
	int si = (i / n)*n;
	int sj = (j / n)*n;

	for (int i = si; i < si+n; i++) {
		for (int j = sj; j < sj+n; j++) {
			if (board[i][j] == number) {
				return false;
			}
		}
	}

	return true;
}

bool Sudoku