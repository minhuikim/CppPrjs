#include <iostream>
using namespace std;

int main()
{
	cout << "202134-365627 �����" << endl;

	int a = 10, b = 100;
	int* ptr = &a;

	cout << "ptr�� ����Ű�� ���� �� : " << *ptr << endl;
	*ptr = 20;
	cout << "���� a�� �� : " << a << endl;
	ptr = &b;
	cout << "���� b�� �� : " << *ptr << endl;

	return 0;
}