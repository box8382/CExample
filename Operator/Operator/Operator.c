/* 오늘 배운내용
#include <stdio.h>

void main()
{
	int num;
	printf("당신의 학점을 입력해주세요 : ");
	scanf_s("%d", &num);


	num = (num >= 90) ? 'A' : 
		//윗줄 해석 : num이 90보다 크거나 같을경우 A 라는 값이 나오고 거짓일경우 아래와같은 식으로 빠진다
		(num >= 80) ? 'B' : 
		//윗줄 해석 : num이 90보다 작거나 80보단 크거나 같을경우 B 라는 값이 나오고 거짓일경우 아래와같은 식으로 빠진다
		(num >= 70) ? 'C' : 
		//윗줄 해석 : num이 80보다 작거나 70보단 크거나 같을경우 C 라는 값이 나오고 거짓일경우 아래와같은 식으로 빠진다
		(num>= 60) ? 'D' : 'F';
	//윗줄 해석 : num이 70보다 작거나 60보단 크거나 같을경우 D 라는 값이 나오고 거짓일 경우 F 의 값이 나온다


	printf("당신의 등급은 %c 입니다",num);
	//윗줄 해석 : num 의 값은 A,B,C,D,F 의 값이 나오니 char 형식의 %c로 값을 출력한다
}
*/




/* 예제 5-2
#include <stdio.h>
void main()
{
	int i = 0, j = 0, k = 0;
	printf("i=%d,  j=%d  k=%d\n", i, j, k);

	i = 1;
	j = 5;
	k = 7;

	printf("i=%d,  j=%d  k=%d", i, j, k);
}
*/



/* 예제 5-5
#include <stdio.h>
void main()
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;

	num1 = num1 + num2;
	printf("복합 덧셈 연산 결과 : num1의 최종 값 : %d \n", num1);

	num2 = num2 - 2;
	printf("복합 뺄셈 연산 결과 : num2의 최종 값 : %d \n", num2);

	num3 = num3*2;
	printf("복합 곱셈 연산 결과 : num3의 최종 값 : %d \n", num3);

	num4 = num4 / 2;
	printf("복합 덧셈 연산 결과 : num4의 최종 값 : %d \n", num4);

	num5 = num5 % 2;
	printf("복합 덧셈 연산 결과 : num5의 최종 값 : %d \n", num5);

	printf("%d  %d  %d  %d  %d", num1,num2,num3,num4,num5);
}
*/




/* 예제 5-6
#include <stdio.h>

void main()
{
	int num1 = 10;
	printf("%d \n", num1);

	num1++;
	printf("%d \n", num1);

	++num1;
	printf("%d \n", num1);

	--num1;
	printf("%d \n", num1);

	num1--;
	printf("%d \n", num1);
}
*/



/* 예제 5-7
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 10;
	int a, b;

	a = ++num1;
	printf("%d  %d\n", a, num1);

	b = num2++;
	printf("%d  %d\n", b, num2);
}
*/



/* 예제 5-8
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 10;
	int a, b;

	num1 = num1 + 1;
	a = num1;
	printf("%d  %d\n", a, num1);

	b = num2;
	num2 = num2 + 1;
	printf("%d  %d\n", b, num2);
}
*/



/* 예제 5-9
#include <stdio.h>

void main()
{
	int num1 = 10, num2 = 10;

	printf("%d \n", ++num1);
	printf("%d \n", num1);

	printf("%d \n", num2++);
	printf("%d \n", num1);
}
*/



/* 예제 5-10
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 4;
	int result1, result2, result3, result4;

	result1 = (num1 > num2);
	result2 = (num1 <= num2);
	result3 = (num1 == num2);
	result4 = (num1 != num2);

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);
	printf("result4에 저장된 값 %d \n", result4);

}
*/



/* 예제 5-11
#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 3, num3 = 5;
	int result1, result2, result3;

	result1 = (num1 > 0) && (num2 < 10);
	result2 = (num2 <=2) || (num3>5);
	result3 = !num3;

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);

}
*/



#include <stdio.h>

void main()
{
	int num1 = 2, num2 = 3;
	int result1;

	result1 = (num1 > num2) ? num1 : num2;
	printf("result1에 저장된 값 %d \n", result1);
}
