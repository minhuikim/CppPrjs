#include <iostream>
#include <cmath>
using namespace std;

// const : 변수의 값이 변하지 않는다.
// double : 실수형 변수 타입 선언
const double PI = 3.141593;

struct C2dType			//2차원 좌표 구조체
{
	double x, y;
};

struct CircleType		// 원 구조체
{
	C2dType center;		// 중심좌표
	double radius;		// 반경
};

// 원의 반경을 가지고 면적을 구한다.
double circleArea(CircleType c)
{
	return c.radius * c.radius * PI; // c.radius : 파라미터로 받은 CircleType c에서 radius값만 꺼내서 계산한 뒤 반환한다. ( 원의 반경 * 원의 반경 * 3.141593 )
}

// 두 원이 겹치는지 확인한 후 boolean값으로 반환한다.
bool chkOverlap(CircleType c1, CircleType c2)
{
	// 각 원의 x좌표와 y좌표를 뺀 값을 구해 각각 dx, dy에 저장한다.
	double dx = c1.center.x - c2.center.x;	// c1.center.x : 파라미터로 받은 CircleType c1의 C2dType center를 꺼내고 C2dType의 x를 꺼낸다.
	double dy = c1.center.y - c2.center.y;

	// 제곱한 dx, dy의 값을 더하고 루트의 값을 구해 dCntr에 저장한다.
	double dCntr = sqrt(dx * dx + dy * dy);	// include한 cmath에서 꺼내온 sqrt 함수 : 매개변수로 들어온 숫자에 루트를 씌워서 계산한 값을 반환

	// dCntr의 값이 두 원의 반경을 더한 값보다 작으면 1(true) 크면 0(false) 반환
	return dCntr < c1.radius + c2.radius;
}

// 원의 중심좌표값과 반경을 출력한다.
void dispCircle(CircleType c)
{
	cout << "중심 : ( " << c.center.x << ", " << c.center.y << " )";
	cout << " 반경 : " << c.radius << endl;
}

int main()
{
	/* 입력 1 */
	//int x1 = 0, y1 = 0, r1 = 10;	// 중심좌표 (0,0), 반경 10으로 초기화
	//int x2 = 30, y2 = 10, r2 = 5;	// 중심좌표 (30,10), 반경 5로 초기화

	int x1 = 10, y1 = 15, r1 = 10;	// 중심좌표 (10,15), 반경 10으로 초기화
	int x2 = 20, y2 = 20, r2 = 30;	// 중심좌표 (20,20), 반경 30로 초기화
									

	CircleType c1 = { {x1,y1},r1 };
	CircleType c2 = { {x2,y2},r2 };

	// c1, c2 각 원의 면적을 구한다.
	cout << "원 1" << endl;
	dispCircle(c1);
	cout << "원 1의 면적 : " << circleArea(c1) << endl;
	cout << "원 2" << endl;
	dispCircle(c2);
	cout << "원 2의 면적 : " << circleArea(c2) << endl << endl;
	
	cout << "[" << chkOverlap(c1, c2) << "]";

	//두 원의 중첩 여부 출력
	if (chkOverlap(c1, c2))
		cout << "두 원은 중첩됩니다." << endl;
	else
		cout << "두 원은 중첩되지 않습니다." << endl;
	return 0;

	/* 입력 1의 값
		원 1
		중심 : ( 0, 0 ) 반경 : 10
		원 1의 면적 : 314.159
		원 2
		중심 : ( 30, 10 ) 반경 : 5
		원 2의 면적 : 78.5398

		두 원은 중첩되지 않습니다.
	*/

	/* 입력 2의 값
		원 1
		중심 : ( 10, 15 ) 반경 : 10
		원 1의 면적 : 314.159
		원 2
		중심 : ( 20, 20 ) 반경 : 30
		원 2의 면적 : 2827.43

		두 원은 중첩됩니다.
	*/
}