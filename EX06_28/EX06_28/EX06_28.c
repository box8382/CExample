/* 과제 1번
#include <stdio.h>

void main()
{
	int num;
	printf("출력할 양의 개수를 적어주세요 : ");
	scanf_s("%d", &num);

	while (0 < num)
	{
		printf("Hellow world!!\n");
		num--;
	}
}  */




/* 과제 2번 문제
#include <stdio.h>

void main()
{
	int num = 3 , i=1;
	int a;

	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &a);

	while (a > 0)
	{
		printf("%d  ",num*i);
		i++;
		a--;
	}
} */




/* 과제 3번 문제
#include <stdio.h>

void main()
{
	int a,total=0;
	
	while (1)
	{
		printf("값을 더할 정수를  입력해주세요 (최종합은 0을 적으면 됩니다)  :");
		scanf_s("%d", &a);
		if (a == 0)
		{
			break;
		}
		total = total + a;
	}
	printf("결과의 최종값은 %d 입니다.", total);
}*/




/* 과제 4번 문제
#include <stdio.h>

void main()
{
	int dan = 9;
	int num;

	printf("출력하실 구구단을 입력해주세요 :");
	scanf_s("%d", &num);

	for (; dan > 0; dan--)
	{
		printf("%d * %d = %d\n", num, dan, num * dan);
	}
} */




/* 과제 5번 문제
#include <stdio.h>

void main()
{
	int num=7;

	while (num < 100)
	{
		while (num % 7 == 0 || num % 9 == 0)
		{
			printf("7의 배수 와 9의배수는 %d 입니다\n",num);
			break;
		}
		num++;
	}
}*/




/* 과제 6번 문제
#include <stdio.h>

void main()
{
	int a, b;
	printf("두 정수를 입력하세요\n\n");
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);

	if (a > b)
	{
		printf(" 두 정수의 뺀 값은 : %d 입니다.", a - b);
	}
	else
	{
		printf(" 두 정수의 뺀 값은 : %d 입니다.", b - a);
	}
}*/




/* 과제 7번 문제
#include <stdio.h>

void main()
{
	int a, b;
	int total;
	printf("두 정수를 입력하세요\n\n");
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);

	total = (a > b) ? a - b : b - a;
	printf(" 두 정수의 뺀 값은 : %d 입니다.", total);
} */




/* 과제 8번 문제
#include <stdio.h>

void main()
{
	int a=1,dan=1;
	int total1, total2;


	printf(" 구구단 출력 프로그램 입니다 \n\n");

	while (a < 9)
	{
		a++;
		if (a % 2 == 1)
		{
			continue;
		}
		while (dan < 9)
		{
			dan++;
			if (dan%2==1)
			{
				continue;
			}
			if (dan > a)
			{
				break;
			}
			printf("%d * %d = %d\n", a, dan, a * dan);
		}
		dan = 1;
		printf("----------\n");
	}
} */



/* 과제 9번 문제
#include <stdio.h>

void main()
{
	int i;
	int a,b=0;
	double total=0;

	printf("입력한값의 평균을 구해드립니다\n\n");
	printf("몇개의 정수를 입력하실건가요 :");
	scanf_s("%d",&i);

	b = b + i;

	for (; i > 0; i--)
	{
		printf("정수 입력 : ");
		scanf_s("%d", &a);
		total += a;
	}
	printf("입력한값의 평균은 %lf 입니다.", total / b);

} */




/* 과제 10번 문제
#include <stdio.h>

void main()
{
	int i=5,num;
	int total=0;
	while(i>0)
	{
		printf("입력 : ");
		scanf_s("%d",&num);
		if (num <= 0)
		{
			printf("재입력 해주세요\n\n");
			continue;
		}
		total += num;
		i--;
	}


	printf("입력한수의 합은 %d 입니다.",total);
}*/



/* 과제 11번 문제 
#include <stdio.h>

void main()
{
	int num=0;
	int i=1;

	printf("*\n");

	while (i<5)
	{
		while (num<i)
		{
			printf("o");
			num++;
		}
		printf("*");
		printf("\n");
		i++;
		num = 0;
	}
} */





/* 오후과제 1번 
#include <stdio.h>

void main()
{
	int num1=1, num2=1, num3=1;
	int a=1;

	while (num3 < 4)
	{

		while (num2 < 10)
		{
			while (a < 4)
			{
				printf("%d * %d = %d\t", num1, num2, num1 * num2);
				num1++;
				a++;
			}
			printf("\n");
			num2++;
			a = 1;
			if(num1==4)
			{
			num1 = 1;
			}
			else if (num1 ==7)
			{
			num1 = 4;
			}
			else
			{
				num1 = 7;
			}
		}
		printf("\n");
		num2 = 1;
		num3++;
		num1 += 3;
	}
}*/




/* 오후과제 2번 
#include <stdio.h>

void main()
{
	int i = 1;
	int b=1, c=0;
	int ae = 5;
	int d = 0,f=10;
	int ai=0;
	int z = 5;

	int o = 5;

	while(o>0)
	{
		if (i == 1)
		{
			while (c<ae)
			{
				printf("%d\t", b);
				b++;
				c++;
			}
			b += 5;
			c = 0;
			printf("\n");
			i = 0;
		}
		else
		{
			while (z > ai)
			{
				printf("%d\t", f);
				f--;
				z--;
			}
			printf("\n");
			z = 5;
			f = f+ 15;
			i = 1;
		}
		o--;
	}
}*/



#include <stdio.h>

void main()
{
	int Num;
	int Line = 1;
	int i;
	int Data, Data1;

	printf("ZigZag 숫자  출력프로그램입니다.\n");

	printf(" 출력하고자 하는 최대값을 입력하세요: ");
	scanf_s("%d", &Data);
	printf(" 한출에 출력하고자 하는 숫자의 개수를 입력 : ");
	scanf_s("%d", &Data1);

	i = Data1 - 1;

	for (Num = 1; Num <= Data + (Data1 - (Data % Data1)); Num++)
	{
		if (Line % 2)
		{
			if (Num > Data)
			{
				break;
			}
			printf("%d\t", Num);
		}
		else
		{
			if ((Num + i) > Data)
			{
				printf("\t");
			}
			else
			{
				printf("%d\t", Num + i);
			}
			i -= 2;
		}
		if (!(Num % Data1))
		{
			printf("\n");
			Line++;
			i = Data1 - 1;
		}
	}
}
