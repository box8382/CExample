/* 과제 1번문제 
#include <stdio.h>
int sum(int a, int b, int c);
int mi(int a, int b, int c);


void main()
{
	int a, b, c;
	int i,i2;
	printf("3개의 정수를 입력해주세요\n");
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);
	printf("입력 : ");
	scanf_s("%d", &c);

	i = sum(a,b,c);
	i2 = mi(a, b, c);

	printf("3개중 가장 높은수는 %d 이고 가장 낮은수는 %d이다 .", i,i2);
}

int sum(int a, int b, int c) //가장 높은수 구함
{
	int i;
	if (a > b)
		i = a;
	else if (b > c)
		i = b;
	else
		i = c;

	return i;
}

int mi(int a, int b, int c) //가장 낮은수 구함 
{
	int i;
	if (a < b)
		i = a;
	else if (b < c)
		i = b;
	else
		i = c;

	return i;
} */



/* 과제 2번문제
#include <stdio.h>
double dou(double a);
double doudo(double b);

void main()
{
	int i;
	double a, b;
	double total1, total2;

	printf("섭씨를 화씨로 변환하려면 1\n화씨를 섭씨로 변환하려면 2\n\n");
	printf("입력 : ");
	scanf_s("%d", &i);

	switch (i)
	{
	case 1:
		printf("섭씨에서 화씨로 변환입니다 값을 입력하세요 : ");
		scanf_s("%lf", &a);
		total1 = dou(a);
		break;
	case 2:
		printf("화씨에서 섭씨로 변환입니다 값을 입력하세요 : ");
		scanf_s("%lf", &b);
		total2 = doudo(b);
		break;
	}


	if (i == 1)
	{
		printf("화씨의 값은 %lf 입니다.", total1);
	}
	else if (i==2)
	{
		printf("섭씨의 값은 %lf 입니다.", total2);
	}
	else
	{
		printf("다시입력하세요 --");
	}

}


double dou(double a)
{
	return (a * 1.8) + 32;
}

double doudo(double b)
{
	return (b - 32) * 5 / 9;
} */



/* 과제 3번 문제 
#include <stdio.h>

void main()
{
	int i;
	int a=1, b=0, c=0;
	printf("피보나치 수열입니다 정수를 입력해주세요 : ");
	scanf_s("%d", &i);
	printf("0\n");

	for (; i > 0; i--)
	{
		printf("%d\n", a);
		c = a + b;
		b = a;
		a = c;
	}
} */




/* 과제 4번 문제 
#include <stdio.h>
int AddToTotal(int num);

void main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
			printf("입력%d:  ", i + 1);
			scanf_s("%d", &num);
			printf("누적: %d \n", AddToTotal(num));
	}
}


int AddToTotal(int num)
{
	static int n;
	n = n + num;

	return n;
}*/


//과제 5번문제 
#include <stdio.h>
void aaa(int a, int b);
void bbb(int a, int b);

void main()
{
	int a, b;
	printf("구구단의 범위를 지정해주세요 \n\n");
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);

	aaa(a,b);
	bbb(a,b);

}

void aaa(int a,int b)
{
	for (; a <= b; a++)
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", a, i, a * i);
		}
		printf("--------------\n");
	}
}

void bbb(int a, int b)
{
	for (; a >= b; b++)
	{
		for (int i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", b, i, b * i);
		}
		printf("--------------\n");
	}
}
