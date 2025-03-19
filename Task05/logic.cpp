// Последний локальный минимум
// [The last local minimum]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает местоположение последнего локального минимума. 

#include "logic.h"

void get_last_local_minimum(int** matrix, int n, int m, int* ii, int* jj) {
	*ii = 0;
	*jj = 0;

	if (n <= 0 || m <= 0 || matrix == nullptr) {
		return;
	}

	if (matrix[n - 1][m - 1] < matrix[n - 1][m - 2]) {
		*ii = n;
		*jj = m;
		return;
	}

	for (int j = m - 2; j > 0; j--)
	{
		if (matrix[n - 1][j] < matrix[n - 1][j - 1]
			&& matrix[n - 1][j] < matrix[n - 1][j + 1]) {
			*ii = n;
			*jj = j + 1;
			return;
		}
	}


	if (matrix[n - 1][0] < matrix[n - 1][1]) {
		*ii = n;
		*jj = 1;
		return;
	}

	for (int i = n - 2; i > 0; i--)
	{
		for (int j = m - 2; j > 0; j--)
		{
			if (matrix[i][j] < matrix[i + 1][j] && matrix[i][j] < matrix[i - 1][j]
				&& matrix[i][j] < matrix[i][j + 1] && matrix[i][j] < matrix[i][j - 1]) {
				*ii = i + 1;
				*jj = j + 1;
				return;
			}
		}
	}
}