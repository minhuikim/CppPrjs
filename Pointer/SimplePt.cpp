#include <iostream>
using namespace std;

// 포인터 변수
/*
	&a = 변수 a의 주소를 나타낸다.
	* = 간접 액세스 연산자
	*ptr = 포인터 변수의 표현
	
	포인터가 적절한 메모리 주소를 가리키게 되면 포인터를 이용하여 그 위치의 값을 엑세스 할 수 있다.
*/
int main()
{
	int a = 10;
	int* ptr;

	ptr = &a;	//포인터변수 ptr에 a의 주소를 넣음
	cout << "ptr이 가리키는 값 : " << *ptr << endl;

	*ptr = 20;	// 포인터 변수의 값이 a변수의 주소값을 가지고 있기 때문에 *ptr에 값을 넣으면 a변수에 값이 저장된다.
	cout << "변수 a의 값 : " << a << endl;

	// 포인터에 const한정어 사용
	/*
		ipt는 const int*로 정의되었는데 ipt가 const int에 대한 포인터라는 의미이다.
		변수 b가 const로 지정되지는 않았지만, ipt가 상수에 대한 포인터라고 지정했으므로 *ipt의 값을 수정하면 에러가 발생한다.
	*/
	int b = 10, c = 20;
	const int* ipt = &b;
	//*ipt = 30;		// error (수정할 수 없는 value)
	ipt = &c;			// ok	 (ipt가 가리키는 위치 변경)

	/*
		포인터 iptr에 대해 const가 지정되면 iptr가 가리키는 곳을 바꿀 수 없다.
	*/
	int d = 10, e = 20;
	int* const iptr = &d;
	*iptr = 30;			//ok	(iptr(d)의 값 변경)
	//iptr = &e;		//error (수정할 수 없는 value)

	/*
		포인터가 가리키는 상수 g의 값이 const로 설정된 경우 int*로 포인터를 가리키면 g의 값을 변경할 수도 있기 때문에 오류가 발생한다.
		포인터에도 const를 지정해주면 g의 주소값에 포인터를 설정할 수 있다.
	*/
	int f = 10;
	const int g = 20;
	int* pt1 = &f;
	//int* pr2 = &g;	 // error (const int* 형식의 값을 사용하여 int* 형식의 엔터티를 초기화 할 수 없습니다.)
	const int* pt3 = &g; // ok
}