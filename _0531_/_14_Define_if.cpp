#include "stdafx.h"
#define LEVEL 100
#if LEVEL < 5
	#define NUM_Enemy 50
#elif LEVEL>=5 && LEVEL<=10
	#define NUM_Enemy 100
#else
	#define NUM_Enemy 1000
#endif // LEVEL
using namespace std;

void _14_Define_if() {

	cout << "Level " << LEVEL << "\nEnemy " << NUM_Enemy << endl;
	system("pause");
}