// Количество локальных минимумов и максимумов
// [The Number of local maxima]
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.

#include "logic.h"

int count_local_max(int* array, int size) {
	int count = 0;

	if (size <= 1) {
		return 0;
	}

	if (array[0] > array[1]) {
		count++;
	}
	if (array[size - 1] > array[size - 2]) {
		count++;
	}

	for (int i = 1; i < size - 1; i++)
	{
		if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
			count++;
		}
	}

	return count;
}