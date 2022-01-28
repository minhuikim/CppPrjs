#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;

int main()
{
	Person* p1 = new Person("Dudley");
	p1->print();						// Person::print() ȣ��
	cout << endl;
	Person* p2 = new Student("Harry", "Hogwarts");
	p2->print(); cout << endl;			// Person::print() ȣ��
	/*
	 ������ ����� ��ü�� Student Ŭ���� ������ Person�����͸� ���� ȣ��ǹǷ� 
	 12�࿡�� ȣ��Ǵ� �Լ��� Person::print();�̴�.
	*/
	((Student*)p2)->print();			// Student::print() ȣ��
	cout << endl;
	return 0;
}

/*
[���]
Dudley
Harry
Harry goes to Hogwarts
*/