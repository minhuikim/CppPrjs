#include <iostream>
//��Ī����
/*
	������ ��Ī�̶� ���� �ٸ� ��Ī�������� ���ǵǾ��ٸ� ������ ������ ������.
	������Ī���� : Ư�� ��Ī������ ������ �ʴ� �⺻ ��Ī����
	std��Ī���� : ǥ�� C++���̺귯���� ��Ī���� ���ǵǾ� �ִ� ��Ī����
*/

namespace NameSpace1
{
	int a = 10;
}

namespace NameSpace2
{
	int a = 20;
}

int a = 30; // ������Ī����

int main()
{
	int a = 40; // �Լ� ������ ����ϴ� ��������

	std::cout << NameSpace1::a << std::endl;	//��Ī���� NameSpace1�� aȣ�� : 10
	std::cout << NameSpace2::a << std::endl;	//��Ī���� NameSpace2�� aȣ�� : 20
	std::cout << ::a << std::endl;				// ������Ī������ a ȣ�� : 30
	std::cout << a << std::endl;				// ���� ����� a ȣ�� : 40
	return 0;
}