#include <iostream>
#include "CounterM.h"
using namespace std;

int main()
{
	CounterM cnt(9);	// Counter 객체의 정의

	cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
	for (int i = 0; i < 12; i++)
	{
		cnt.count();	// 계수기를 1 증가시킴
		cout << "계수기의 현재 값 : " << cnt.getValue() << endl;
	}
	return 0;
}

/*
계수기의 현재 값 : 0
계수기의 현재 값 : 1
계수기의 현재 값 : 2
계수기의 현재 값 : 3
계수기의 현재 값 : 4
계수기의 현재 값 : 5
계수기의 현재 값 : 6
계수기의 현재 값 : 7
계수기의 현재 값 : 8
계수기의 현재 값 : 9
계수기의 현재 값 : 0
계수기의 현재 값 : 1
계수기의 현재 값 : 2
*/