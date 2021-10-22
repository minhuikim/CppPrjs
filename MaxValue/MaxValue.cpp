#include <iostream>
using namespace std;

// 배열에 저장된 가장 큰 값 찾기
/*
	임의의 값 max를 설정한 뒤 반복문과 조건문을 사용해 배열의 값을 비교해 가장 큰 값을 찾는다.
*/
int main()
{
	int max;
	int data[10] = { 10, 20, 5, 9, 22, 48, 12, 10, 55, 31 };

	max = data[0];	// data의 0번 값을 max로 가정함

	cout << "데이터 : " << data[0];	// 0번 데이터 출력

	// 0번과 나머지 9개의 데이터 비교 (1~9)
	for (int i = 1; i < 10; i++)
	{
		// i번 데이터 출력
		cout << " " << data[i];	

		// max로 설정한 값과 i번 데이터 비교하여 i번의 값이 더 크면 max의 값을 변경한다.
		if (max < data[i])
		{
			max = data[i];
		}
	}
	cout << "\n\n배열의 최댓값 : " << max << endl;	// 출력 : 55
	
	return 0;
}