#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person* p1 = new Person("��ö��", "����� ���α�");
	Person* p2 = new Person("������", "������ ���ؽ�");
	p1->print();
	p2->print();
	cout << endl << "�ּ� ���� : ";
	p2->chAddr("������ ����");
	p2->print();
	delete p1;
	delete p2;

	return 0;
}

/*
* ���
Person ��ü ������(��ö��)
Person ��ü ������(������)
����� ���α��� �����ö���Դϴ�.
������ ���ؽÿ� ��¹������Դϴ�.

�ּ� ���� : ������ ������ ��¹������Դϴ�.
Person ��ü ������(��ö��)
Person ��ü ������(������)
*/