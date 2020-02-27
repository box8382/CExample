/* 과제 1번 문제
#include <stdio.h>

void main()
{
	int a, b;

	printf("두개의 정수를 입력해주세요 : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("두 정수의 뺄셈은 %d 입니다. \n", a-b);
	printf("두 정수의 곱셈은 %d 입니다. \n", a*b);
}
*/



/* 과제 2번 문제
#include <stdio.h>

void main()
{
	int num1, num2, num3;
	int total;
	printf("정수 세개를 입력해주세요 : ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);
	total = num1 * num2 + num3;
	printf("%d * %d + %d = %d ", num1, num2, num3, total);

} */




/* 과제 3번 문제
#include <stdio.h>

void main()
{
	int a;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &a);
	printf("입력하신 정수의 제곱은 %d 입니다", a * a);
}*/




/* 과제 4번 문제
#include <stdio.h>

void main()
{
	int a, b;
	printf("두개의 값을 입력하세요\n\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("두개의 나눗셈의 값은 %d 입니다 나머지는%d입니다", a / b, a % b);
}
*/





// 과제 5번 문제
#include <stdio.h>

void main()
{
	int num1, num2, num3;
	int total1, total2, total3;
	int a;

	printf("세개의 정수를 입력하세요\n\n");
	printf("num1 : ");
	scanf_s("%d", &num1);
	printf("num2 : ");
	scanf_s("%d", &num2);
	printf("num3 : ");
	scanf_s("%d", &num3);
	total1 = num1 - num2;
	total2 = num2 + num3;
	total3 = num3 / num1;
	a = total1 * total2 * total3;
	printf("(num1-num2)*(num2+num3)*(num3/num1) 의 값은 %d입니다.\n", a);
}