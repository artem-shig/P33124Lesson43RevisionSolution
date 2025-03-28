// Сумма элементов [The Sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.

#include "logic.h"

// 0 1 2 3 4 5 6
// 2 5 9 6 4 1 3
// 2 5 1 6 4 9 3

int find_index_absolute_max_value(int* array, int size) {
	int indexMaxValue = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[indexMaxValue]) < abs(array[i])) {
			indexMaxValue = i;
		}
	}
	return indexMaxValue;
}

int find_index_absolute_min_value(int* array, int size) {
	int indexMinValue = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[indexMinValue]) > abs(array[i])) {
			indexMinValue = i;
		}
	}
	return indexMinValue;
}

int sum_between_first_min_max(int* array, int size) {
	int indexMaxValue = find_index_absolute_max_value(array, size);
	int indexMinValue = find_index_absolute_min_value(array, size);

	int sum = 0;

	if (indexMaxValue > indexMinValue) {
		int t = indexMinValue;
		indexMinValue = indexMaxValue;
		indexMaxValue = t;
	}

	for (int i = indexMaxValue + 1; i < indexMinValue; i++)
	{
		sum += array[i];
	}

	return sum;
}