/* 예제 6-1
#include <stdio.h>

void main()
{
	//정수형
	char num1 = 10;
	short num2 = 20;
	int num3 = 30;
	long num4 = 40;

	//실수형
	float num5 = 3.14; (float이 4바이트로 나오는이유는 변수형 상자를 만들고 바로 초기화를 했기 때문이다.)
	double num6 = 3.15;
	long double num7 = 3.17;

	printf("\n----------정수형 자료형과 변수의 메모리 크기----------\n");
	printf("char형의 크기 %d바이트,  %d바이트\n", sizeof(char), sizeof(num1));
	printf("short형의 크기 %d바이트,  %d바이트\n", sizeof(short), sizeof(num2));
	printf("int형의 크기 %d바이트,  %d바이트\n", sizeof(int), sizeof(num3));
	printf("long형의 크기 %d바이트,  %d바이트\n", sizeof(short), sizeof(num4));

	printf("\n----------실수형 자료형과 변수의 메모리 크기----------\n");
	printf("float형의 크기 %d바이트,  %d바이트\n", sizeof(float), sizeof(num5));
	printf("double형의 크기 %d바이트,  %d바이트\n", sizeof(double), sizeof(num6));
	printf("long double형의 크기 %d바이트,  %d바이트\n", sizeof(long double), sizeof(num7));
}
*/



/* 예제 6-4 
#include <stdio.h>

void main()
{
	char num1 = -129;
	char num2 = 128;

	printf("%d \n", num1);
	printf("%d \n", num2);

	num1 = -130;
	num2 = 129;

	printf("%d \n", num1);
	printf("%d \n", num2);
}
*/




/* 예제 6-7
#include <stdio.h>

void main()
{
float 소수점 6자리까지
double 소수점 15자리까지 
그외는 쓰래기값
	float num1 = 0.123456789012345;
	double num2= 0.123456789012345;

	printf("float형 : %f \n", num1);
	printf("double형 : %lf \n", num2);

	printf("float형 : %.15f \n", num1);
	printf("double형 : %.15lf \n", num2);
}
*/




/* 예제 6-9
#include <stdio.h>

void main()
{
	char val1;

	A는 ASCII 코드값으로 65 이기때문에 
	65 = A 라는 값이 나온다
	val1 = 'A';
	printf("%d %c \n", val1, val1);

	val1 = 'B';
	printf("%d %c \n", val1, val1);

	val1 = 'C';
	printf("%d %c \n", val1, val1);
}
*/




/* 연습문제 6번 (한바퀴 완주식을 모르겠음)
#include <stdio.h>

void main()
{
	int rkm, vkm;
	double go;

	printf("반지름을 입력 하세요 : ");
	scanf_s("%d", &rkm);
	printf("속력값 입력 하세요 : ");
	scanf_s("%d", &vkm);

	go = ??
	printf("한 바퀴를 완주하는데 걸리는 시간은 %.3f 입니다",)
}
*/




//연습문제 7번 
#include <stdio.h>

void main()
{
	double r;
	printf("원의 반지름을 입력하세요 : ");
	scanf_s("%lf", &r);
	printf("원의 둘레는 %lf 입니다 \n", 2 * 3.14 * r);
}
