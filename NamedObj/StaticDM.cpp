#include <iostream>
#include "NamedObj.h"
using namespace std;

void f()
{
	NamedObj x("Third");	// 세 번째 객체의 생성
	x.display();			// 함수 반환 후 x는 소멸됨
}

int main()
{
	cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
	NamedObj a("First");	// 첫 번째 객체 생성
	NamedObj b("Second");	// 두 번째 객체 생성
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");	// 네 번째 객체 생성
	c.display();
	cout << "NamedObj 클래스의 객체 수 : " << NamedObj::nObj() << endl;
	return 0;
}

/*
[출력]
NamedObj 클래스의 객체 수 : 0
ID : 1 --> 이름 : First
ID : 2 --> 이름 : Second
ID : 3 --> 이름 : Third
ID : 4 --> 이름 : Fourth
NamedObj 클래스의 객체 수 : 3
	=>  main에서 객체 2개 생성 후 
		f()를 통해 3번째 객체 생성 후 소멸되며 함수 종료 (소멸자+1)
		main으로 돌아와서 4번째 객체 생성
		생성자 4 - 소멸자 1 = 객체 수 3개 출력
*/