#include <stdlib.h>
#include<iomanip>
#include <iostream>

using namespace std;

void _4_Rectangle()
{
    int l, h, switch;
    cout << "1.實心長方形\t2.長方形外框\t3.結束 ";
    cin >> switch;
    switch (switch){

    case 1:
        cout << "請輸入二個整數 (l h) ";
        cin >> l >> h;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        break;

    case 2:
        for (int i = 0; i < l; i++)
            cout << "*";
        cout << "" << endl;
        for (int i = 0; i < h - 2; i++)
        {
            cout << "*";
            for (int j = 0; j < l - 2; j++)
                cout << " ";
            cout << "*" << endl;
        }
        for (int i = 0; i < l; i++)
            cout << "*";
        cout << endl;
        break;

    case 3: return;

    default:
        cout << "您輸入的數字不在選項內" << endl;
        break;
    }
    system("PAUSE > nul");

}
