// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее арифметическое элементов
// вектора без учета минимального и максимального элементов.

#include "logic.h"

int find_index_max_value(int* array, int size) {
	int maxValue = array[0];

	for (int i = 1; i < size; i++)
	{
		if (array[i] > maxValue) {
			maxValue = array[i];
		}
	}

	return maxValue;
}

int find_index_min_value(int* array, int size) {
	int minValue = array[0];

	for (int i = 0; i < size; i++)
	{
		if (array[i] < minValue) {
			minValue = array[i];
		}
	}

	return minValue;
}

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	int maxValue = find_index_max_value(array, size);
	int minValue = find_index_min_value(array, size);

	double sum = 0.0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != maxValue && array[i] != minValue) {
			sum += array[i];
			count++;
		}
	}
		

	return count > 0 ? sum / count : 0.0;
}