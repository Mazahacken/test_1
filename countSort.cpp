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
	//��� 0 ����� ������������ �����
	int max = getMax(arr, n);
	//��� 1 ������� �������� ������� ��� �������� ������ � �������� �������������� ��������
	int* count = new int[max + 1];
	int* output = new int[n];
	for (int i = 0; i < max + 1; i++)//�������� �������� ������� count
		count[i] = 0;
	//��� 2 ������� ������
	for (int i = 0; i < n; i++)
		count[arr[i]]++;
	//��� 3 ����������� ������ � ���������� �����
	for (int i = 1; i < max + 1; i++)
		count[i] += count[i - 1];
	//��� 4 ��������� �������� ������ � ���������� �������
	for (int i = n - 1; i >= 0; i--)
	{
		output[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
	//����������� ������
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