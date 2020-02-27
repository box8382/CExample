/* 연습문제 1번
#include <stdio.h>

void main()
{
	int num,a=1;
	int total=0;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &num);

	for (;1; a++)
	{
		total = num * a;
		if (total > 100)break;
		printf("%d  ", total);
	}
	printf("\n\n%d의 개수 %d 개 ", num,a-1);
}*/



/* 연습문제 2번
#include <stdio.h>

void main()
{
	char ch = '*';
	int a=0,b=1;
	while (b<6)
	{
		while (b>a)
		{
			printf("%c", ch);
			a++;
		}
		printf("\n");
		b++;
		a = 0;
	}
}*/




/* 연습문제 3번
#include <stdio.h>

void main()
{
	char ch = '*';
	int a = 0, b = 0;
	int c = 7;
	int d = 0;
	int e = 1;

	while (b<4)
	{
		while (a<c)
		{
			while (d < e)
			{
				printf(" ");
				d++;
			}
			printf("%c", ch);
			a++;
		}
		printf("\n");
		c -= 2;
		b++;
		a = 0;
		d = 0;
		e++;
	}
}*/



/* 연습문제 4번
#include <stdio.h>

void main()
{
	int num,dan;
	printf("구구단 출력 프로그램 입니다 : ");
	scanf_s("%d", &num);

	for (dan = 2; dan < 10; dan++)
	{
		printf("%d * %d = %d\n", num, dan, num * dan);
	}
}*/



/* 연습문제 5번
#include <stdio.h>

void main()
{
	int num, i=1;
	int factorial=1;

	printf("팩도리얼 연산을 원하는 숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	while (i < num+1)
	{
		factorial= factorial * i;
		i++;
	}
	printf("%d의 팩토리얼 연산 결과는 %d 입니다", num, factorial);
} */




/* 연습문제 6번
#include <stdio.h>

void main()
{
	int a, b;

	while (1)
	{
		printf("첫 번째 수를 입력해 주세요 : ");
		scanf_s("%d", &a);
		printf("두 번째 수를 입력해 주세요 : ");
		scanf_s("%d", &b);
		printf("%d + %d = %d 입니다.\n", a, b, a + b);
	}
} */



/* 연습문제 7번 
#include <stdio.h>

void main()
{
	int a=0;
	int num;
	double total=0;

	while (a < 10)
	{
		printf("점수를 입력해 주세요 : ");
		scanf_s("%d", &num);
		total = total + num;
		a++;
	}
	printf(" 열 과목 점수의 평균은 %lf 입니다", (double)total/10);

}*/



/* 연습문제 8번
#include <stdio.h>

void main()
{
	int num,sum=0;
	int i=0;
	while (1)
	{
		printf("정수를 입력해주세용 :");
		scanf_s("%d",&num);
		i++;
		sum += num;
		if (num == 0)
		{
			break;
		}
	}
	printf("총 %d번을 더했고 그결과는 %d 입니다.",i,sum);
} */



//연습문제  223p 4번
#include <stdio.h>

void main()
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 2==0)
		{
			continue;
		}
		printf("%d\n", num);
	}
}