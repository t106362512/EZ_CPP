#include "stdafx.h"
using namespace std;

using namespace std;
void _10_() {
	int width = 13;
	if (width % 2 == 0) {
		width += 1;
	}
	for (int i = 0; i != width; i++) {
		for (int j = 0; j != width; j++) {
			if (j == (width / 2 - i) || j == (width / 2 + i) || j == (i - width / 2) || j == (width / 2 * 3 - i))
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	system("pause");
}
