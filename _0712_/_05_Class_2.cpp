#include "stdafx.h"
#include <iostream>
using namespace std;

class Time					//宣告Time類別
{
	int hour;					//私有資料成員
	int minute;				//私有資料成員
	int second;					//私有資料成員
public:
	void set_time(int hour, int minute, int second)	//設定時間成員函數
	{
		this -> hour = hour;
		this -> minute = minute;
		this -> second = second;
	}

	void print_time(const Time &t)	//顯示時間成員函數
	{
		cout << ((hour == 0 || hour == 12) ? 12 : (hour % 12))
			<< ':' << ((minute < 10) ? "0" : "") << minute
			<< ':' << ((second < 10) ? "0" : "") << second
			<< (hour < 12 ? " AM" : " PM") << endl;
	}
};

void _05_Class_2()
{
	Time midnight;	//定義物件midnight
	midnight.set_time(0, 57, 0);	//呼叫set_time函數
	cout << "午夜標準時間：";
	midnight.print_time(midnight);	//呼叫print_time函數
	system("PAUSE");
}
