/* 예제 9-1
#include <stdio.h>
int sum(int x, int y);

void main()
{
	int answer = 0;
	answer = sum(3, 4);
	printf("%d\n", answer);
}

int sum(int x, int y)
{
	int result = 0;
	result = x + y;
	return result;
} */




/* 예제 9-2 
#include <stdio.h>
int max(int a, int b);

void main()
{
	int i, j;
	int k;

	printf("숫자 두 개를 입력하세요 : ");
	scanf_s("%d", &i);
	scanf_s("%d", &j);

	k = max(i, j);
	printf("%d와 %d 중 큰 수는 %d 입니다. \n", i, j, k);
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}*/



/* 예제 9-3
#include <stdio.h>
double divide(double x, double y);
double input();
void output(double x);
void information();

int main()
{
	double num1, num2, result;

	information();
	printf("첫 번째 실수 입력 : ");
	num1 = input();

	printf("두 번째 실수 입력 : ");
	num2 = input();

	result = divide(num1, num2);
	output(result);
}

double divide(double x, double y)
{
	double val;
	val = x / y;
	return val;
}

double input()
{
	double val;
	scanf_s("%lf", &val);
	return val;
}

void output(double x)
{
	printf("나눗셈 결과 : %lf \n", x);
}

void information()
{
	printf("---프로그램 시작---\n");
}*/



/* 예제 9-4
#include <stdio.h>
int sum();
int input();
void output(int x);

void main()
{
	int result;
	printf("---프로그램 시작 ---\n");
	printf("정수 한 개를 입력하세요 : ");

	result = sum();
	output(result);
}

int sum()
{
	int i= 0, total = 0, num = 0;
	num = input();
	
	for (i = 1; i <= num; i++)
	{
		total = total + i;
	}
	return total;
}

int input()
{
	int val;
	scanf_s("%d", &val);
	return val;
}

void output(int x)
{
	printf("결과 : %d \n", x);
}*/




/* 예제 9-5
#include <stdio.h>
void func_A();

void main()
{
	int aaa = 10;
	printf("main() 함수의 aaa값 : %d\n", aaa);

	func_A();
}

void func_A()
{
	int aaa = 20;
	int bbb = 30;

	printf("func_A() 함수의 aaa값 : %d\n", aaa);
	printf("func_A() 함수의 bbb값 : %d\n", bbb);
}*/




/* 예제 9-6
#include <stdio.h>

void main()
{
	int i = 0;
	int total=0;

	for (i = 1; i < 3; i++)
	{
		int total = 0;
		total = total + i;
	}

	if (total < 10)
	{
		printf("total 값은 %d 입니다. \n ", total);
	}
}*/



/*
#include <stdio.h>
int subtract(int x, int y);

void main()
{
	int a = 5, b = 3;
	int result = 0;

	result = subtract(a, b);
	printf("뺄셈 결과 : %d \n", result);
}

int subtract(int x, int y)
{
	return x - y;
} */



/* 예제 9-8
#include <stdio.h>
int num;
void grow();

void main()
{
	printf("함수 호출 전 num : %d \n", num);

	grow(); 
	printf("함수 호출 후num : %d \n", num);
}

void grow()
{
	num = 60;
} */



/* 예제 9-9
#include <stdio.h>
void count();

void main()
{
	count();
	count();
	count();
}

void count()
{
	static int x = 0;
	int y = 0;

	x = x + 1;
	y = y + 1;

	printf("x 값 : %d , y 값 : %d \n", x, y);
}*/



/* 예제 9-11
#include <stdio.h>
void self_service();

void main()
{
	self_service();
}

void self_service()
{
	printf("셀프 서비스 \n");
	self_service();
}*/



/* 예제 9-12
#include <stdio.h>
void self_service();

void main()
{
	self_service();
}

void self_service()
{
	static int i= 1;

	if (i > 5)
		return;

	printf("셀프 서비스 %d 회\n", i);
	i = i + 1;
	self_service();
}
*/



/* 예제 9-13
#include <stdio.h>
void self_service(int n);

void main()
{
	int a = 1;
	self_service(a);
}

void self_service(int n)
{
	if (n > 5)
		return;

	printf("셀프 서비스 %d 회\n", n);
	self_service(n + 1);
}*/



/* 연습문제 1번
#include <stdio.h>
int sbs();

void main()
{
	int a;
	a=sbs();

	printf("입력한 값의 절댓값은 %d입니다", a);
}

int sbs()
{
	int a;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &a);
	if (a < 0)
		a = -a;

	return a;
}*/



