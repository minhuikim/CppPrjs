#include <iostream>
using namespace std;

//������ ����� ��� ����
int main()
{
	const double PI{ 3.14159 };				//�������� ����
	double radius;							//���� �ݰ�

	cout << "���� �ݰ��� �Է��Ͻÿ� : ";
	cin >> radius;							// ���� �ݰ� �Է� : 10
	double area = radius * radius * PI;		// ���� ���
	cout << "���� ���� = " << area << endl;	// ��� ��� : 314.159
	return 0;
}