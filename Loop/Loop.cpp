#include <iostream>
using namespace std;

int main()
{
	/* if�� : a�� b ���� ���� ��� a�� b�� ���� ���� */
	int a, b;

	cin >> a >> b;	// a : 1 , b : 5
		
	if (a < b)
	{
		int c = a; // a�� ���� ��� �����صα� ���� �������� c�� ����Ѵ�.
		a = b;
		b = c;
	}

	cout << "a�� �� : " << a << endl;	// a : 5
	cout << "b�� �� : " << b << endl;	// b : 1
	


	/* switch �� */
	int score;
	char grade;

	cin >> score; // score : 85
	switch (score / 10)
	{
		case 10 :				//score�� 100�� ��� �Ʒ��� ��� ����
		case 9 : grade = 'A';	// score�� 90~100�� ���
			break;				// ���ǿ� �ش��ϴ� "grade = 'A'"��� ������ ���������� switch���� ����������.
		case 8: grade = 'B';	// score�� 80~89�� ���
			break;
		case 7: grade = 'C';	// score�� 70~79�� ���
			break;
		case 6: grade = 'D';	// score�� 60~69�� ���
			break;
		case 5: grade = 'F';	// �� �� ��� ���
			break;
	}
	cout << "score "<< score << "�� ����� " << grade << "�Դϴ�."; // ��� : score 85�� ����� B�Դϴ�.
	


	/* �ݺ��� - 1. for�� */
	int val, total = 0;
	for (int i = 0; i < 10; i++) // i�� ���� 10���� �����ϴ� ���� for�� ���� �Է��� 10�� �ݺ��ȴ�.
	{
		cin >> val;		// 1~10���� ���ʴ�� �Է�
		total += val;
	}
	cout << total;		// ��� : 55



	/* �ݺ��� - 2. �迭�� for�� */
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = 0;

	for (int a : arr)	// arr�� �迭�� ��� a�� ������ �� ���� for���� �ݺ��ȴ�.
	{
		sum += a;
	}
	cout << "�հ� = " << sum;	//��� : 55



	/* �ݺ��� - 3. �迭�� for��, �������� */
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int &a : arr2)	//a�� ���������� �Ǿ� arr2�迭 ���� ���� ��ȭ��Ų��.
	{
		++a;			// arr2�׸� �ϳ��� ������ 1�� ���Ѵ�.
	}
	cout << "�迭 3������ �� : 4 -> ��ȭ�� �� : " << arr2[3]; // ��� : �迭 3������ �� : 4 -> ��ȭ�� �� : 5

}