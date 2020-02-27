/* 예제 2-11
#include <stdio.h>

void main()
{
	int age;
	printf("what is your age? : ");
	scanf_s("%d", &age);
	printf("Wow! Really? Are you %d years old? \n", age);
}
*/




/* 예제 2-12
#include <stdio.h>

void main()
{
	int a, b, c;
	printf("10진수 정수 1개 입력 : ");
	scanf_s("%d", &a);
	printf("10진수  : %d,  16진수 : %x,  8진수 : %o  \n", a, a, a);


	printf("10진수 정수 1개 입력 : ");
	scanf_s("%d", &b);
	printf("10진수  : %d,  16진수 : %x,  8진수 : %o  \n", b, b, b);


	printf("10진수 정수 1개 입력 : ");
	scanf_s("%d", &c);
	printf("10진수  : %d,  16진수 : %x,  8진수 : %o  \n", c, c, c);
}
*/




/* 예제 2-13
#include <stdio.h>

void main()
{
	float f1, f2;
	double d1, d2;

	printf("float형  실수 두개 입력 : ");
	scanf_s("%f", &f1);
	scanf_s("%e", &f2);
	printf("float 형 실수 출력 : f1=%f,  f2=%e \n", f1, f2);


	printf("double형 실수 두개 입력 : ");
	scanf_s("%lf", &d1);
	scanf_s("%le", &d2);
	printf("double형 실수 출력 : d1=%lf,  d2=%le  \n", d1, d2);

} */



/* 예제 3-6
#include <stdio.h>

void main()
{
	int a = 0, b = 1;
	
	printf("a의 값은 %d 입니다. \n", a);
	printf("b의 값은 %d 입니다. \n", b);

	a = a + 10;
	b = b + 10;

	printf("a의 값은 %d 입니다. \n", a);
	printf("b의 값은 %d 입니다. \n", b);
} */



/* 예제 3-8
#include <stdio.h>

void main()
{
	int applebox = 30;
	int grapebox = 20;
	int total;

	total = applebox + grapebox;
	printf("총 %d 박스가 있습니다. \n", total);

}
*/



/* 연습문제 3번
#include <stdio.h>

void main()
{
	int a, b;
	printf("가로 길이를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("세로 길이를 입력하세요 : ");
	scanf_s("%d", &b);

	printf("직사각형의 넓이는 %d 입니다. \n",a*b);

}
*/



/* 연습문제 4번
#include <stdio.h>

void main()
{
	int r;
	double pi = 3.14;

	printf("반지름을 입력하세요 : ");
	scanf_s("%d", &r);

	printf("원의 넓이는 %lf입니다.\n", r * r * pi);

}
*/



// 연습문제 5번
#include <stdio.h>

void main()
{
	int a, b;
	printf("두 정수를 입력하세요 : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
		printf("두 정수의 합은 %d 입니다.\n", a + b);
		printf("두 정수의 차은 %d 입니다.\n", a - b);
}
