#include <iostream>
using namespace std;

int main()
{
	cout << "202134-365627 �����" << endl;

	char* sPtr;
	int maxSLen;
	cout << "�ܾ��� �ִ� ���̸� �Է��Ͻÿ� : ";
	cin >> maxSLen;

	sPtr = new char[maxSLen + 1];

	cout << "�ܾ �Է��Ͻÿ� : ";
	cin >> sPtr;

	for (char* p = sPtr; *p; p++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p += 'A' - 'a';
		}
	}
	cout << sPtr << endl;
	delete[] sPtr;
}