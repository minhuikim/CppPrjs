#include <iostream>
using namespace std;

int main()
{
	//표준 출력 스트림으로 문장을 출력함
	//cout : 출력(콘솔 출력) / endl : 다음행부터 출력
	std::cout << "나의 첫 번째 C++ 프로그램"<<std::endl;
	
	//cin : 표준입력 스트림 객체 (콘솔 입력)
	int a;
	char str[100];
	std::cin>>a>>str;

	return 0;
}

