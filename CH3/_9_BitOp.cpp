#include "stdafx.h"

using namespace std;

void _9_BitOp() {

	short Ia = 0x5678, Ib = 0x12ff, S1 = 52, S2 = 14;
	char C1 = 'A', C2 = 'b';
	cout << hex;
	cout << "Ia & Ib = 0x" << (Ia & Ib) << endl;
	cout << "Ia ^ Ib = 0x" << (Ia ^ Ib) << endl;
	cout << "Ia | Ib = 0x" << (Ia | Ib) << endl;
	cout << "S1 & S2 = 0x" << (S1 & S2) << endl;
	cout << "S1 ^ S2 = 0x" << hex << (S1 ^ S2) << endl;
	cout << "S1 | S2 = 0x" << hex << (S1 | S2) << endl;
	cout << "C1 & C2 = 0x" << (C1 & C2) << endl;
	cout << "C1 ^ C2 = 0x" << (C1 ^ C2) << endl;
	cout << "C1 | C2 = 0x" << (C1 | C2) << endl;
	cout << "C1 & Ib = 0x" << (C1 & Ib) << endl;

	cout << " ~Ia = 0x" << (~Ia) << endl;
	cout << " ~C1 = 0x" << (~C1) << endl;
	cout << " S1 >> 2 = 0x" << (S1 >> 2) << endl;
	cout << " C1 >> 2 = 0x" << (C1 >> 2) << endl;
	system("pause > nul");
}