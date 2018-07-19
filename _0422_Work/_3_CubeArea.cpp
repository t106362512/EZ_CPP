#include <stdlib.h>
#include<iomanip>
#include <iostream>

using namespace std;

inline double qArea(int r){
	return r*r*6;
}

inline double qVolumn(int r){
	return r*r*r;
}

void _3_CubeArea()
{
	cout << "半徑" << setw(13) << "表面積" << setw(15) << "體積" << endl;
	for (int i = 5; i < 11; i++)
        cout << setw(2) << i << setw(15) << qArea(i) << setw(15)  << qVolumn(i) << endl;

	system("PAUSE > nul");
}

