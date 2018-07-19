#include "stdafx.h"
using namespace std;

int linearSearch(int[], int, int);

void _05_() {

	const int size = 12;//陣列大小
	int search = 0;//想要找的值

	int arr[size] = {37,5,84,92,10,49,56,81,63,21,75,52};

	cout << "顯示資料:";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout << "輸入資料:";
	cin >> search;
	int element = linearSearch(arr, search, size);

	if (element != -1)
		cout << "資料:  " << element << endl;

	else
		cout << "找不到資料: " << search << endl;

	system("pause");

}

int linearSearch(int data[], int key, int size)
{
	int index;

	for (index = 0; index < size; index++)
	{
		if (data[index] == key)
		{
			return index;
		}
	}
	return -1;
}
