#include <iostream>
#include "CBParttime.h"
using namespace std;

int main()
{
	Parttime chulsoo("Chulsoo", "ABC Univ.", "DEF Co.");
	chulsoo.Student::print();
	chulsoo.Employee::print();
	return 0;
}

/*
[Ãâ·Â]
Chulsoo goes to ABC Univ.
Chulsoo is employed by DEF Co.
*/