#include "stdafx.h"
#include <time.h>
void _03_() {
	srand(time(NULL));

	/* ���w�üƽd�� */

	double min = -2.0;
	double max = 18.0;
	/* ���� [min , max) ���B�I�ƶü� */

	for (int z = 0; z < 10; z++)
	{
		printf("��%2d��: ", z + 1);
		double x = (max - min) * rand() / (RAND_MAX + 1.0) + min;
		printf("%f", x);
		printf("\n");
	}

	system("PAUSE");
	return;
}