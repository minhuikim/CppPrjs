#include <iostream>
using namespace std;

//변수와 상수의 사용 예제
int main()
{
	const double PI{ 3.14159 };
	double radius;

	cout << "원의 반경을 입력하시오 : ";
	cin >> radius;
	double area = radius * radius * PI;
	cout << "원의 면적 = " << area << endl;
	return 0;
}