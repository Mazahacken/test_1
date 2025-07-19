#include <iostream>

void merge(int* arr, int l, int m, int r)
{
	//шаг 1 вычесляем размер левой и правой части массива
	int nl = m - l + 1;
	int nr = r - m;

	//шаг 2 создаем временые массивы
	int* left = new int[nl];
	int* right = new int[nr];

	//шаг 3 копируем данные во временные массвы
	for (int i = 0; i < nl; i++)
	{
		left[i] = arr[l + 1];
	}
	for (int j = 0; j < nr; j++)
	{
		right[j] = arr[m + j + 1];
	}
	//шаг 4 инициализируем индексы
	int i = 0;
	int j = 0;
	int k = l;

	//шаг  5 записываем минимальные элементы обратно в массив
	while (i < nl && j < nr)
	{
		if (left[i] <= right[j]) {
			arr[k++] = left[i++];
			i++;
		}
		else {
			arr[k++] = right[j++];
			j++;
		}
		k++;
	}
	//шаг 6 записываем оставшиеся элементы левой части
	while (i < nl) {
		arr[k] = left[i];
		i++;
		k++;
	}
	//шаг 7 записываем оставшиеся элементы правой части
	while (j < nr) {
		arr[k] = right[j];
		j++;
		k++;
	}
}