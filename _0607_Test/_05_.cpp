#include "stdafx.h"
using namespace std;

int linearSearch(int[], int, int);

void _05_() {

	const int size = 12;//�}�C�j�p
	int search = 0;//�Q�n�䪺��

	int arr[size] = {37,5,84,92,10,49,56,81,63,21,75,52};

	cout << "��ܸ��:";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
	cout << "��J���:";
	cin >> search;
	int element = linearSearch(arr, search, size);

	if (element != -1)
		cout << "���:  " << element << endl;

	else
		cout << "�䤣����: " << search << endl;

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
