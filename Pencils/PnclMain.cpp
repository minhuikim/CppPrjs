#include <iostream>
#include "Pencils.h"
using namespace std;

int main()
{
	Pencils p1(5, 7);
	Pencils p2(23);

	p1.display();
	(++p1).display();
	p1.display();
	cout << endl;
	p2.display();
	p1 = p2++;
	p1.display();
	p2.display();
	return 0;
}

/*
[출력]
5타7자루
5타8자루
5타8자루

1타11자루
1타11자루
2타
*/