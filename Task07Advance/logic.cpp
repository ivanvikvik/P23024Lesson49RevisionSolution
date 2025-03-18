﻿// Сжатие матрицы [The matrix compression]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// уплотняет заданную матрицу, удаляя из нее строки и столбцы, 
// заполненные нулями, т.е. нулевые строки и/или столбцы. 

#include "logic.h"

int** compress(int** matrix, int n, int m, int* cn, int* cm) {
	if (n <= 0 || m <= 0 || matrix == nullptr) {
		return nullptr;
	}

	return nullptr;
}