#include <iostream>
using namespace std;

/*
	inline 함수
		함수가 가지는 모듈회의 장점을 살리면서 불필요한 실행 효율 저하를 막기 위해 사용된다.
		일반 함수와는 달리 함수의 처리 문장이 호출되는 위치에 직접 삽인된다.
*/

// 두 변수의 값을 바꾸는 함수
// 인수 int &x, int &y : 값을 바꿀 변수
// 반환값 없음
inline void SwapValues(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "두 수를 입력하시오 : ";
	cin >> a >> b;
	if (a < b) SwapValues(a, b); //순서를 바꿔 a에 큰 값을 넣음
	cout << "큰 수 = " << a << "작은 수 = " << b << endl;

	return 0;
}