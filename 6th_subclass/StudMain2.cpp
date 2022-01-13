#include <iostream>
#include "Person2.h"
#include "Student2.h"
using namespace std;

int main()
{
	Student harry("Harry", "Hogwarts");

	cout << harry.getName() << "goes to " << harry.getSchool() << endl;

	return 0;
}
/*
Person의 생성자
Student의 생성자
Harrygoes to Hogwarts
Student의 소멸자
Person의 소멸자
*/