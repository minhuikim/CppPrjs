#include <iostream>
using namespace std;

// 참조 (reference)
/*
	포인터와 유사한 개념을 지원한다.
	어떠한 변수에 대한 참조는 그 변수의 별명이라고 할 수 있다.
	& : 참조형의 표현

	int& aRef = a;에서 aRef를 a로 초기화하면 aRef에 a의 값이 들어가는게 아니라
	aRef가 a를 참조하도록 지정함으로써 aRef를 사용하는 것이 a를 사용하는 것과 동일한 결과를 내도록 한다.
*/
int main()
{
	int a = 10, b = 20;
	int& aRef = a;			// 초기화를 통해 변수 a에 대한 참조를 지정한다.
	cout << aRef << endl;	// 출력 : 10

	aRef = 100;				// aRef = 100 로 값을 변경하면 a의 값도 100이 된다.
	cout << aRef << endl;	// 출력 : 100
	cout << a << endl;		// 출력 : 100

	aRef = b;
	cout << aRef << endl;	// 출력 : 20
}
