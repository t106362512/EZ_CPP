#include "stdafx.h"
#include <time.h>
void _02_() {
	srand(time(NULL));

	/* ���w�üƽd�� */
	int min = 0;
	int max = 1;

	/* ���� [min , max] ����ƶü� */
	for (int z = 0; z < 10; z++)
	{
		printf("��%2d��: ", z + 1);
		for (int z = 0; z < 10; z++)
		{
			int x = rand() % (max - min + 1) + min;
			printf("%d", x);
		}

		printf("\n");
	}



	system("PAUSE");
	return;
}