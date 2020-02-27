/*
#include <iostream>

int main()
{
	int a,b;
	std::cout << "입력 : ";
	std::cin >> a;

	std::cout << "입력 : ";
	std::cin >> b;

	std::cout << std::endl;
	std::cout << a << "+" << b << "=" << a + b << std::endl;
	return 0;
}*/



/*
#include <iostream>

void main()
{
	char name[20];
	std::cout << "string input : ";
	std::cin >> name;

	std::cout << std::endl;
	std::cout << "입력받은 문자열 : " << name << std::endl;
}*/





/*오버로딩(overloading) 예제 변수가 이름이 같은데 파라미터가 다를경우만 가능 그걸 오버레이라고함
#include <iostream>
int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{
	int sum = add(5, 3);
	std::cout << "결과 : " << sum << std::endl;
	std::cout << "결과 : " << add(10, 7) << std::endl;
	std::cout << "결과 : " << add(4, 2) << std::endl;
	std::cout << "결과 : " << add(1.5, 2.2) << std::endl;
}*/



//c++
#include <iostream>
#include <cstring>

using namespace std;

int a=10;

void main()
{
	int len = strlen("hello");
}