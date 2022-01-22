#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main()
{
	Person* p1 = new Person("Dudley");
	p1->print();						// Person::print() 호출
	cout << endl;
	Person* p2 = new Student("Harry", "Hogwarts");
	p2->print(); cout << endl;			// Person::print() 호출
	/*
	 실제로 연결된 객체는 Student 클래스 이지만 Person포인터를 통해 호출되므로 
	 12행에서 호출되는 함수는 Person::print();이다.
	*/
	((Student*)p2)->print();			// Student::print() 호출
	cout << endl;
	return 0;
}

/*
[출력]
Dudley
Harry
Harry goes to Hogwarts
*/