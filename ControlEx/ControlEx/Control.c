/* 연습문제 1번
#include <stdio.h>

void main()
{
	int a, b;
	printf("두 정수를 입력해주세요 : ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (a > b)
	{
		printf("큰수는 %d 입니다\n", a);
	}
	else if (b > a)
	{
		printf("큰수는 %d 입니다\n", b);
	}
	else if (a == b)
	{
		printf("두수는 같습니다\n");
	}
	else
	{
		printf("값을 잘못입력했습니다\n");
	}
	printf("시스템을 종료합니다\n");
}*/




/* 연습문제 2번
#include <stdio.h>

void main()
{
	int num;
	int a, b, c;


	printf("3자리 십진수를 입력해주세요 : ");
	scanf_s("%d", &num);

	a = num / 100;                             100자리 구하는공식
	b = (num / 10)%10;                        10자리 구하는공식
	c = num % 10;                                 1자리 구하는공식
	
	if (a % 2)
	{
		printf("%d는 홀수\n",a);
	}
	else
	{
		printf("%d는 짝수\n", a);
	}


	if (b % 2)
	{
		printf("%d는 홀수\n", b);
	}
	else
	{
		printf("%d는 짝수\n", b);
	}


	if (c % 2)
	{
		printf("%d는 홀수\n", c);
	}
	else
	{
		printf("%d는 짝수\n", c);
	}
	printf("시스템을 종료 합니다 ");
}
*/



/* 연습문제 3번
#include <stdio.h>

void main()
{
	int score;
	printf("당신의 점수는? : ");
	scanf_s("%d", &score);

	if (score <= 100)
	{
		switch (score)
		{
		case 100:
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
		case 94:
		case 93:
		case 92:
		case 91:
		case 90:
			printf("A 입니당");
			break;

		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
		case 84:
		case 83:
		case 82:
		case 81:
		case 80:
			printf("B 입니당");
			break;
			
		default:
			printf("F 입니당");
		}
	}
	else
	{
		printf("100이하의 숫자만 입력해주세요!!");
	}
}
*/





#include <stdio.h>

void main()
{
	int a, b, c;
	printf("정수 3개를 입력해주세요 \n\n");

	printf(" input : ");
	scanf_s("%d", &a);
	printf(" input : ");
	scanf_s("%d", &b);
	printf(" input : ");
	scanf_s("%d", &c);

	if (a > b)
	{
		printf("result : %d\n", a);
	}
	else if (b > c)
	{
		printf("result : %d\n", b);
	}
	else if(c>a)
	{
		printf("result : %d\n", c);
	}
	else
	{
		printf("result : %d\n",a);
	}
}