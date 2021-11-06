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
	cout << "���� �ϴ� (x1) : ";
	cin >> r.x1;
	cout << "���� �ϴ� (y1) : ";
	cin >> r.y1;
	cout << "���� ��� (x2) : ";
	cin >> r.x2;
	cout << "���� ��� (y2) : ";
	cin >> r.y2;
}

void inputData(Circle& c)
{
	cout << "���� ������ : ";
	cin >> c.radius;
	cout << "�߽���ǥ (x) : ";
	cin >> c.cx;
	cout << "�߽���ǥ (y) : ";
	cin >> c.cy;
}

void prData(const Rectangle& r)
{
	cout << "���� �ϴ� ��ǥ = (" << r.x1 << ", " << r.y1 << ")" << endl;
	cout << "���� ��� ��ǥ = (" << r.x2 << ", " << r.y2 << ")" << endl;
	cout << "���α��� = " << (r.x2 - r.x1) << endl;
	cout << "���α��� = " << (r.y2 - r.y1) << endl;
}

void prData(const Circle& c)
{
	cout << "������ = " << c.radius << endl;
	cout << "�߽���ǥ = (" << c.cx;
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
	cout << "202134-365627 �����" << endl;

	Circle circle = {1, 2, 3};
	inputData(circle);
	cout << "�Էµ� ���� ����" << endl;
	prData(circle);
	cout << "���� ���� = " << area(circle) << endl;

	Rectangle ractangle = { 1, 2, 3, 4 };
	inputData(ractangle);
	cout << "�Էµ� ��ǥ�� ����" << endl;
	prData(ractangle);
	cout << "�簢���� ���� = " << area(ractangle) << endl;
}