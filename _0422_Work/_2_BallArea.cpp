#include <stdlib.h>
#include<iomanip>
#include <iostream>
#include <math.h>

using namespace std;

inline double sArea(double pi, int r){
	return 4 * pi*r*r*r;
}

inline double sVolumn(double pi, int r){
	return (4 / 3) * pi * r*r*r;
}

void _2_BallArea()
{
	cout << "半徑" << setw(13) << "表面積" << setw(13) << "體積" << endl;
	for (int i = 5; i < 11; i++)
		cout << setw(2) << i << setw(15) << sArea(M_PI, i) << setw(15)  << sVolumn(M_PI, i) << endl;

	system("PAUSE > nul");
}
