#include <iostream>
using namespace std;

int main()
{
	char str[14] = "Hello, world!";
	char* pt;

	cout << str << endl;

	pt = str;	// �����Ͱ� �迭 str�� ����Ŵ

	while (*pt)	// ���ڿ��� ���� �ƴϸ� �ݺ��Ѵ�.
	{
		// �����Ͱ� ����Ű�� �迭�� ���� �ҹ����� ��� �빮�ڷ� �ٲ۴�.
		if (*pt >= 'a' && *pt <= 'z')
		{
			*pt = *pt - 'a' + 'A';
		}
		pt++;	// �����͸� �迭�� ���� ����������� �̵��Ѵ�.
	}

	cout << str << endl; // ��� : HELLO, WORLD!
	return 0;
}