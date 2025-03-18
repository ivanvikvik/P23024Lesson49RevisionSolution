// Последний локальный минимум
// [The last local minimum]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// находит и возвращает местоположение последнего локального минимума. 

#include "logic.h"

void get_last_local_minimum(int** matrix, int n, int m, int* i, int* j) {
	if (n <= 0 || m <= 0 || matrix == nullptr) {
		*i = -1;
		*j = -1;
		return;
	}
}