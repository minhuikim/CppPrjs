#include <iostream>
using namespace std;

int main()
{
	char str[14] = "Hello, world!";
	char* pt;

	cout << str << endl;

	pt = str;	// 포인터가 배열 str을 가리킴

	while (*pt)	// 문자열의 끝이 아니면 반복한다.
	{
		// 포인터가 가리키는 배열의 값이 소문자인 경우 대문자로 바꾼다.
		if (*pt >= 'a' && *pt <= 'z')
		{
			*pt = *pt - 'a' + 'A';
		}
		pt++;	// 포인터를 배열의 다음 저장공간으로 이동한다.
	}

	cout << str << endl; // 출력 : HELLO, WORLD!
	return 0;
}