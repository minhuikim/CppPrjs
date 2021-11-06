#include <iostream>
using namespace std;

const float PI = 3.14159265f;

struct Circle {
	float radius, cx, cy;
};

struct Rectangle {
	float x1, y1;
	float x2, y2;
};

void inputData(Rectangle& r)
{
	cout << "좌측 하단 (x1) : ";
	cin >> r.x1;
	cout << "좌측 하단 (y1) : ";
	cin >> r.y1;
	cout << "우측 상단 (x2) : ";
	cin >> r.x2;
	cout << "우측 상단 (y2) : ";
	cin >> r.y2;
}

void inputData(Circle& c)
{
	cout << "원의 반지름 : ";
	cin >> c.radius;
	cout << "중심좌표 (x) : ";
	cin >> c.cx;
	cout << "중심좌표 (y) : ";
	cin >> c.cy;
}

void prData(const Rectangle& r)
{
	cout << "좌측 하단 좌표 = (" << r.x1 << ", " << r.y1 << ")" << endl;
	cout << "우측 상단 좌표 = (" << r.x2 << ", " << r.y2 << ")" << endl;
	cout << "가로길이 = " << (r.x2 - r.x1) << endl;
	cout << "세로길이 = " << (r.y2 - r.y1) << endl;
}

void prData(const Circle& c)
{
	cout << "반지름 = " << c.radius << endl;
	cout << "중심좌표 = (" << c.cx;
	cout << ", " << c.cy << ")" << endl;
}

float area(const Rectangle& r)
{
	return (r.x2-r.x1) * (r.y2-r.y1);
}

float area(const Circle& c)
{
	return PI * c.radius * c.radius;
}

int main()
{
	cout << "202134-365627 김민희" << endl;

	Circle circle = {1, 2, 3};
	inputData(circle);
	cout << "입력된 원의 정보" << endl;
	prData(circle);
	cout << "원의 면적 = " << area(circle) << endl;

	Rectangle ractangle = { 1, 2, 3, 4 };
	inputData(ractangle);
	cout << "입력된 좌표의 정보" << endl;
	prData(ractangle);
	cout << "사각형의 면적 = " << area(ractangle) << endl;
}