#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr)
{
	// 이름을 저장할 공간 할당
	this->name = new char[strlen(name) + 1];

	// 데이터 멤버 name에 이름을 복사
	strcpy(this->name, name);

	// 주소를 저장할 공간 할당
	this->addr = new char[strlen(addr) + 1];

	// 데이터 멤버 addr에 주소를 복사
	strcpy(this->addr, addr);

	cout << "Person 객체 생성함 (" << name << ")" << endl;
}

