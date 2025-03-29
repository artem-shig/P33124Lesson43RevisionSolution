// Сортировка из указанного промежутка
// [The Sort from the specified range]
//
// Дан вектор натуральных чисел. Необходимо разработать
// функцию(или программу), которая сортирует часть элементов
// заданного вектора в указанном диапазоне порядковых номеров
// либо по возрастанию, либо по убыванию.

#include "logic.h"

void sort_in_range(int* array, int size, int start, int end, bool type) {

	if (size <= 1 || start < 0 || end < 0 || start >= size || end >= size) {
		return;
	}

	if (start > end) {
		int t = end;
		end = start;
		start = t;
	}

	while (end != start) {

		bool flag = true;

		for (int i = start; i < end; i++)
		{
			if (type ? array[i] > array[i + 1] : array[i] < array[i + 1]) {
				flag = false;
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}
		if (flag) {
			break;
		}
	}
}