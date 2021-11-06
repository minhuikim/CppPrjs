#include <iostream>
using namespace std;

int main()
{
	cout << "202134-365627 김민희" << endl;

	char* sPtr;
	int maxSLen;
	cout << "단어의 최대 길이를 입력하시오 : ";
	cin >> maxSLen;

	sPtr = new char[maxSLen + 1];

	cout << "단어를 입력하시오 : ";
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