#include <iostream>

int getMax(int* arr, int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

void countSort(int* arr, int n)
{
	//шаг 0 Найти максимальное число
	int max = getMax(arr, n);
	//шаг 1 Создать временые массивы для подсчета сачтот и хранения отсортированых значений
	int* count = new int[max + 1];
	int* output = new int[n];
	for (int i = 0; i < max + 1; i++)//обнуляем элементы массива count
		count[i] = 0;
	//шаг 2 Подсчет частот
	for (int i = 0; i < n; i++)
		count[arr[i]]++;
	//шаг 3 Преобразуем массив в накопленые суммы
	for (int i = 1; i < max + 1; i++)
		count[i] += count[i - 1];
	//шаг 4 Заполняем выходной массив в правильном порядке
	for (int i = n - 1; i >= 0; i--)
	{
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
	//Освобождаем память
	delete[] count;
	delete[] output;

}

int main()
{
	int arr[] = { 3, 5, 1, 2, 1, 0, 5, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countSort(arr, n);

	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}