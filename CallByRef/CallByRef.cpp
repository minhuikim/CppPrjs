#include <iostream>
using namespace std;

const float PI = 3.14159265f;

struct Circle {
	float radius, cx, cy;
};

void inputData(Circle& c)
{
	cout << "원의 반지름 : ";
	cin >> c.radius;
	cout << "중심좌표 (x) : ";
	cin >> c.cx;
	cout << "중심좌표 (y) : ";
	cin >> c.cy;
}

void prData(const Circle& c)
{
	cout << "반지름 = " << c.radius << endl;
	cout << "중심좌표 = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}

float area(const Circle& c)
{
	return PI * c.radius * c.radius;
}

int main()
{
	Circle circle = { 1, 2, 3 };
	inputData(circle);
	cout << "입력된 원의 정보" << endl;
	prData(circle);
	cout << "원의 면적 = " << area(circle) << endl;
}