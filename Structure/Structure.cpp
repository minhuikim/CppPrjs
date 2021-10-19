#include <iostream>
#include <cmath>
using namespace std;

// const : ������ ���� ������ �ʴ´�.
// double : �Ǽ��� ���� Ÿ�� ����
const double PI = 3.141593;

struct C2dType			//2���� ��ǥ ����ü
{
	double x, y;
};

struct CircleType		// �� ����ü
{
	C2dType center;		// �߽���ǥ
	double radius;		// �ݰ�
};

// ���� �ݰ��� ������ ������ ���Ѵ�.
double circleArea(CircleType c)
{
	return c.radius * c.radius * PI; // c.radius : �Ķ���ͷ� ���� CircleType c���� radius���� ������ ����� �� ��ȯ�Ѵ�. ( ���� �ݰ� * ���� �ݰ� * 3.141593 )
}

// �� ���� ��ġ���� Ȯ���� �� boolean������ ��ȯ�Ѵ�.
bool chkOverlap(CircleType c1, CircleType c2)
{
	// �� ���� x��ǥ�� y��ǥ�� �� ���� ���� ���� dx, dy�� �����Ѵ�.
	double dx = c1.center.x - c2.center.x;	// c1.center.x : �Ķ���ͷ� ���� CircleType c1�� C2dType center�� ������ C2dType�� x�� ������.
	double dy = c1.center.y - c2.center.y;

	// ������ dx, dy�� ���� ���ϰ� ��Ʈ�� ���� ���� dCntr�� �����Ѵ�.
	double dCntr = sqrt(dx * dx + dy * dy);	// include�� cmath���� ������ sqrt �Լ� : �Ű������� ���� ���ڿ� ��Ʈ�� ������ ����� ���� ��ȯ

	// dCntr�� ���� �� ���� �ݰ��� ���� ������ ������ 1(true) ũ�� 0(false) ��ȯ
	return dCntr < c1.radius + c2.radius;
}

// ���� �߽���ǥ���� �ݰ��� ����Ѵ�.
void dispCircle(CircleType c)
{
	cout << "�߽� : ( " << c.center.x << ", " << c.center.y << " )";
	cout << " �ݰ� : " << c.radius << endl;
}

int main()
{
	/* �Է� 1 */
	//int x1 = 0, y1 = 0, r1 = 10;	// �߽���ǥ (0,0), �ݰ� 10���� �ʱ�ȭ
	//int x2 = 30, y2 = 10, r2 = 5;	// �߽���ǥ (30,10), �ݰ� 5�� �ʱ�ȭ

	int x1 = 10, y1 = 15, r1 = 10;	// �߽���ǥ (10,15), �ݰ� 10���� �ʱ�ȭ
	int x2 = 20, y2 = 20, r2 = 30;	// �߽���ǥ (20,20), �ݰ� 30�� �ʱ�ȭ
									

	CircleType c1 = { {x1,y1},r1 };
	CircleType c2 = { {x2,y2},r2 };

	// c1, c2 �� ���� ������ ���Ѵ�.
	cout << "�� 1" << endl;
	dispCircle(c1);
	cout << "�� 1�� ���� : " << circleArea(c1) << endl;
	cout << "�� 2" << endl;
	dispCircle(c2);
	cout << "�� 2�� ���� : " << circleArea(c2) << endl << endl;
	
	cout << "[" << chkOverlap(c1, c2) << "]";

	//�� ���� ��ø ���� ���
	if (chkOverlap(c1, c2))
		cout << "�� ���� ��ø�˴ϴ�." << endl;
	else
		cout << "�� ���� ��ø���� �ʽ��ϴ�." << endl;
	return 0;

	/* �Է� 1�� ��
		�� 1
		�߽� : ( 0, 0 ) �ݰ� : 10
		�� 1�� ���� : 314.159
		�� 2
		�߽� : ( 30, 10 ) �ݰ� : 5
		�� 2�� ���� : 78.5398

		�� ���� ��ø���� �ʽ��ϴ�.
	*/

	/* �Է� 2�� ��
		�� 1
		�߽� : ( 10, 15 ) �ݰ� : 10
		�� 1�� ���� : 314.159
		�� 2
		�߽� : ( 20, 20 ) �ݰ� : 30
		�� 2�� ���� : 2827.43

		�� ���� ��ø�˴ϴ�.
	*/
}