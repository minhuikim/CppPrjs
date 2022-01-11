#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int cnt = -1;

	scanf("%d %d %d", &a, &b, &c);

	if (b < c)
	{
		cnt = a / (c - b) + 1;
	}
	else
	{
		if (a == 0)
		{
			cnt = 0;
		}
		else
		{
			cnt = -1;
		}
	}

	printf("%d", cnt);
	

	return 0;
}