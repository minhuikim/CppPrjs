#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	Counter cnt;	// Counter ��ü�� ���� - value �� �ڵ������� 0�� ��
	cout << "������� ���� �� : " << cnt.getValue() << endl;	// ������� ���� �� : 0

	cnt.reset();	// ����⸦ 0���� ����
	cout << "������� ���� �� : " << cnt.getValue() << endl;	// ������� ���� �� : 0

	cnt.count();	// ����⸦ 1 ������Ŵ
	cnt.count();
	cout << "������� ���� �� : " << cnt.getValue() << endl;	// ������� ���� �� : 2

	return 0;
}