#include <iostream>
using namespace std;

int main()
{
	/* if문 : a가 b 보다 작을 경우 a와 b의 값을 변경 */
	int a, b;

	cin >> a >> b;	// a : 1 , b : 5
		
	if (a < b)
	{
		int c = a; // a의 값을 잠시 저장해두기 위한 지역변수 c를 사용한다.
		a = b;
		b = c;
	}

	cout << "a의 값 : " << a << endl;	// a : 5
	cout << "b의 값 : " << b << endl;	// b : 1
	


	/* switch 문 */
	int score;
	char grade;

	cin >> score; // score : 85
	switch (score / 10)
	{
		case 10 :				//score가 100인 경우 아래로 계속 진행
		case 9 : grade = 'A';	// score가 90~100인 경우
			break;				// 조건에 해당하는 "grade = 'A'"라는 문장을 수행했으면 switch문을 빠져나간다.
		case 8: grade = 'B';	// score가 80~89인 경우
			break;
		case 7: grade = 'C';	// score가 70~79인 경우
			break;
		case 6: grade = 'D';	// score가 60~69인 경우
			break;
		case 5: grade = 'F';	// 그 외 모든 경우
			break;
	}
	cout << "score "<< score << "의 등급은 " << grade << "입니다."; // 출력 : score 85의 등급은 B입니다.
	


	/* 반복문 - 1. for문 */
	int val, total = 0;
	for (int i = 0; i < 10; i++) // i의 값이 10까지 증가하는 동안 for문 내의 입력이 10번 반복된다.
	{
		cin >> val;		// 1~10까지 차례대로 입력
		total += val;
	}
	cout << total;		// 출력 : 55



	/* 반복문 - 2. 배열과 for문 */
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = 0;

	for (int a : arr)	// arr내 배열을 모두 a에 대입할 때 까지 for문이 반복된다.
	{
		sum += a;
	}
	cout << "합계 = " << sum;	//출력 : 55



	/* 반복문 - 3. 배열과 for문, 참조변수 */
	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int &a : arr2)	//a가 참조변수가 되어 arr2배열 내의 값을 변화시킨다.
	{
		++a;			// arr2항목 하나의 값마다 1씩 더한다.
	}
	cout << "배열 3번방의 값 : 4 -> 변화된 값 : " << arr2[3]; // 출력 : 배열 3번방의 값 : 4 -> 변화된 값 : 5

}