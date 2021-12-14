#include <iostream>
#include "NamedObj.h"
using namespace std;

void f()
{
	NamedObj x("Third");	// �� ��° ��ü�� ����
	x.display();			// �Լ� ��ȯ �� x�� �Ҹ��
}

int main()
{
	cout << "NamedObj Ŭ������ ��ü �� : " << NamedObj::nObj() << endl;
	NamedObj a("First");	// ù ��° ��ü ����
	NamedObj b("Second");	// �� ��° ��ü ����
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");	// �� ��° ��ü ����
	c.display();
	cout << "NamedObj Ŭ������ ��ü �� : " << NamedObj::nObj() << endl;
	return 0;
}

/*
[���]
NamedObj Ŭ������ ��ü �� : 0
ID : 1 --> �̸� : First
ID : 2 --> �̸� : Second
ID : 3 --> �̸� : Third
ID : 4 --> �̸� : Fourth
NamedObj Ŭ������ ��ü �� : 3
	=>  main���� ��ü 2�� ���� �� 
		f()�� ���� 3��° ��ü ���� �� �Ҹ�Ǹ� �Լ� ���� (�Ҹ���+1)
		main���� ���ƿͼ� 4��° ��ü ����
		������ 4 - �Ҹ��� 1 = ��ü �� 3�� ���
*/