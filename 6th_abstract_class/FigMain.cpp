#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

// ������ �׷��� �Ӽ�
GrAttrib curAttrib("����", "���");

void drawFigs(const Figure* const figs[], int n)
{
	for (int i = 0; i < n; i++) {
		figs[i]->draw();
		cout << endl;
	}
}

int main() {
	Figure* figs[2];
	figs[0] = new Circle(0, 20, 10);
	double v[3][2] = { {0, 0}, {20, 0}, {10, 15} };
	curAttrib.setLineColor("����");
	curAttrib.setFillColor("���");
	figs[1] = new Triangle(v);
	drawFigs(figs, 2);		// ��� ���� �׸��� ��� ���

	figs[0]->scale(2);		// ���� ũ�� ����
	figs[1]->move(5, 10);	// �ﰢ���� �̵�
	drawFigs(figs, 2);		// ��� ���� �׸��� ��� ���
	
	return 0;
}

/*
[���]
�� �׸���
(0, 20)�������� 10��ŭ ������ ��� ������ �������� �׸���
���θ� ������� ä���.

�ﰢ�� �׸���
(0, 0), (20, 0), (10, 15)�� ��ǥ�� �մ� ������ �������� �׸���
 ���θ� ������� ä���.

�� �׸���
(0, 40)�������� 20��ŭ ������ ��� ������ �������� �׸���
���θ� ������� ä���.

�ﰢ�� �׸���
(5, 10), (25, 10), (15, 25)�� ��ǥ�� �մ� ������ �������� �׸���
 ���θ� ������� ä���.
*/