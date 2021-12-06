#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	Counter cnt;	// Counter 객체의 정의 - value 는 자동적으로 0이 됨
	cout << "계수기의 현재 값 : " << cnt.getValue() << endl;	// 계수기의 현재 값 : 0

	cnt.reset();	// 계수기를 0으로 지움
	cout << "계수기의 현재 값 : " << cnt.getValue() << endl;	// 계수기의 현재 값 : 0

	cnt.count();	// 계수기를 1 증가시킴
	cnt.count();
	cout << "계수기의 현재 값 : " << cnt.getValue() << endl;	// 계수기의 현재 값 : 2

	return 0;
}