#include "stdafx.h"
#include <iostream>
using namespace std;

class Time					//�ŧiTime���O
{
	int hour;					//�p����Ʀ���
	int minute;				//�p����Ʀ���
	int second;					//�p����Ʀ���
public:
	void set_time(int hour, int minute, int second)	//�]�w�ɶ��������
	{
		this -> hour = hour;
		this -> minute = minute;
		this -> second = second;
	}

	void print_time(const Time &t)	//��ܮɶ��������
	{
		cout << ((hour == 0 || hour == 12) ? 12 : (hour % 12))
			<< ':' << ((minute < 10) ? "0" : "") << minute
			<< ':' << ((second < 10) ? "0" : "") << second
			<< (hour < 12 ? " AM" : " PM") << endl;
	}
};

void _05_Class_2()
{
	Time midnight;	//�w�q����midnight
	midnight.set_time(0, 57, 0);	//�I�sset_time���
	cout << "�ȩ]�зǮɶ��G";
	midnight.print_time(midnight);	//�I�sprint_time���
	system("PAUSE");
}
