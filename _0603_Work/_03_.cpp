#include "stdafx.h"
#include <time.h>
void _03_() {
	srand(time(NULL));

	/* 指定亂數範圍 */

	double min = -2.0;
	double max = 18.0;
	/* 產生 [min , max) 的浮點數亂數 */

	for (int z = 0; z < 10; z++)
	{
		printf("第%2d組: ", z + 1);
		double x = (max - min) * rand() / (RAND_MAX + 1.0) + min;
		printf("%f", x);
		printf("\n");
	}

	system("PAUSE");
	return;
}