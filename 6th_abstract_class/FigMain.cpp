#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

// 현재의 그래픽 속성
GrAttrib curAttrib("검정", "흰색");

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
	curAttrib.setLineColor("빨강");
	curAttrib.setFillColor("노랑");
	figs[1] = new Triangle(v);
	drawFigs(figs, 2);		// 모든 도형 그리기 방법 출력

	figs[0]->scale(2);		// 원의 크기 조정
	figs[1]->move(5, 10);	// 삼각형의 이동
	drawFigs(figs, 2);		// 모든 도형 그리기 방법 출력
	
	return 0;
}

/*
[출력]
원 그리기
(0, 20)에서부터 10만큼 떨어진 모든 점들을 검정으로 그리고
내부를 흰색으로 채운다.

삼각형 그리기
(0, 0), (20, 0), (10, 15)의 좌표를 잇는 선분을 빨강으로 그리고
 내부를 노랑으로 채운다.

원 그리기
(0, 40)에서부터 20만큼 떨어진 모든 점들을 검정으로 그리고
내부를 흰색으로 채운다.

삼각형 그리기
(5, 10), (25, 10), (15, 25)의 좌표를 잇는 선분을 빨강으로 그리고
 내부를 노랑으로 채운다.
*/