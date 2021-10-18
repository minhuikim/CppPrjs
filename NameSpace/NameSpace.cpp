#include <iostream>
//명칭공간
/*
	동일한 명칭이라도 서로 다른 명칭공간에서 정의되었다면 별개의 것으로 구분함.
	전역명칭공간 : 특정 명칭공간에 속하지 않는 기본 명칭공간
	std명칭공간 : 표준 C++라이브러리의 명칭들이 정의되어 있는 명칭공간
*/

namespace NameSpace1
{
	int a = 10;
}

namespace NameSpace2
{
	int a = 20;
}

int a = 30; // 전역명칭공간

int main()
{
	int a = 40; // 함수 내에서 사용하는 지역변수

	std::cout << NameSpace1::a << std::endl;	//명칭공간 NameSpace1의 a호출 : 10
	std::cout << NameSpace2::a << std::endl;	//명칭공간 NameSpace2의 a호출 : 20
	std::cout << ::a << std::endl;				// 전역명칭공간의 a 호출 : 30
	std::cout << a << std::endl;				// 가장 가까운 a 호출 : 40
	return 0;
}