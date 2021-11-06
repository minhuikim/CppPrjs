#include <iostream>
using namespace std;

int main()
{
	cout << "202134-365627 ±è¹ÎÈñ" << endl;

	int a = 10, b = 20;
	int &aRef = a;

	cout << "aÀÇ °ª : " << a << endl;
	cout << "aRef°¡ ÂüÁ¶ÇÏ´Â °ª : " << aRef << endl << endl;
	
	aRef = 100;
	cout << "aÀÇ °ª : " << a << endl;

	aRef = b;
	cout << "aÀÇ °ª : " << a << endl;

	return 0;
}