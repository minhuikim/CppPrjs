#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person* p1 = new Person("이철수", "서울시 종로구");
	Person* p2 = new Person("박은미", "강원도 동해시");
	p1->print();
	p2->print();
	cout << endl << "주소 변경 : ";
	p2->chAddr("대전시 서구");
	p2->print();
	delete p1;
	delete p2;

	return 0;
}

/*
* 결과
Person 객체 생성함(이철수)
Person 객체 생성함(박은미)
서울시 종로구에 사는이철수입니다.
강원도 동해시에 사는박은미입니다.

주소 변경 : 대전시 서구에 사는박은미입니다.
Person 객체 제거함(이철수)
Person 객체 제거함(박은미)
*/