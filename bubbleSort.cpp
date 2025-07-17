#include <iostream>
#include <algorithm>

void BubbleSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; ++i) {
		bool swapped = false;

		for (int j = 0; j < n - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped)
			break;
	}
}

void PrintSort(const int* arr, const int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";	
	}
	std::cout << std::endl;
}

int main() {
	int arr[] = { 64, 36, 87, 98, 52, 40, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, n);
	PrintSort(arr, n);
	return 0;
}