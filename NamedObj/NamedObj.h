#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
using namespace std;

class NamedObj {
	char* name;
	int id;
	// static 데이터 멤버
	static int nConstr;			// 생성된 객체 수
	static int nDestr;
public :
	NamedObj(const char* s);	// 생성자
	~NamedObj();				// 소멸자
	void display() const {
		cout << "ID : " << id << " --> 이름 : " << name << endl;
	}
	static int nObj() {			// 존재하는 객체 수 반환
		return nConstr - nDestr;
	}
};

#endif
