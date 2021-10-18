#include <iostream>
using namespace std;

//변수와 상수의 사용 예제
int main()
{
	const double PI{ 3.14159 };				//원주율의 정의
	double radius;							//원의 반경

	cout << "원의 반경을 입력하시오 : ";
	cin >> radius;							// 원의 반경 입력 : 10
	double area = radius * radius * PI;		// 면적 계산
	cout << "원의 면적 = " << area << endl;	// 결과 출력 : 314.159
	return 0;
}