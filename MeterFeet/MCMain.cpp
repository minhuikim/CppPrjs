#include <iostream>
#include "Meter.h"
#include "Feet.h"

int main()
{
	Meter mLen;
	Feet fLen(10, 5);
	mLen = fLen;	// 송신 측 클래스에 정의된 형 변환
	fLen.display();
	mLen.display();
	fLen = mLen;	// 수신 측 클래스에 정의된 형 변환
	fLen.display();
	return 0;
}
/*
[출력]
10ft 5in
3m18cm
10ft 5in
*/