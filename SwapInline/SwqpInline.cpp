#include <iostream>
using namespace std;

/*
	inline �Լ�
		�Լ��� ������ ���ȸ�� ������ �츮�鼭 ���ʿ��� ���� ȿ�� ���ϸ� ���� ���� ���ȴ�.
		�Ϲ� �Լ��ʹ� �޸� �Լ��� ó�� ������ ȣ��Ǵ� ��ġ�� ���� ���εȴ�.
*/

// �� ������ ���� �ٲٴ� �Լ�
// �μ� int &x, int &y : ���� �ٲ� ����
// ��ȯ�� ����
inline void SwapValues(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> a >> b;
	if (a < b) SwapValues(a, b); //������ �ٲ� a�� ū ���� ����
	cout << "ū �� = " << a << "���� �� = " << b << endl;

	return 0;
}