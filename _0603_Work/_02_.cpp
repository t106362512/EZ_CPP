#include "stdafx.h"
#include <time.h>
void _02_() {
	srand(time(NULL));

	/* 指定亂數範圍 */
	int min = 0;
	int max = 1;

	/* 產生 [min , max] 的整數亂數 */
	for (int z = 0; z < 10; z++)
	{
		printf("第%2d組: ", z + 1);
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