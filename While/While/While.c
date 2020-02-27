/* 예제 7-1 
#include <stdio.h>

void main()
{
	int num = 0;
	while (num < 5)
	{
		printf("반복내용 : %d \n", num);
		num++;
	}
	printf("반복문을 종료한 후 %d \n", num);
}*/




/* 예제 7-2
#include <stdio.h>

void main()
{
	int i = 1, sum = 0;
	while (i <= 10)
	{
		sum = sum + i;
		printf("i = %d , num = %d \n", i, sum);
		i++;
	}
	printf("----------반복문 종료 -----------");
}*/



/* 예제 7-3
#include <stdio.h>

void main()
{
	int i = 0;
	while (1)
	{
		printf("반복 횟수 %d\n", i);
		i++;
	}
}*/



/* 예제 7-4
#include <stdio.h>
void main()
{
	int i = 2, j = 1, result = 0;

	while(i<10)
	{
	while (j< 10)
	{
		result = i * j;
		printf("%d * %d = %d\n", i, j, result);
		j++;
	}
	i++;
	j = 1;
	printf("----------\n");
	}
} */



/* 예제 7-5
#include <stdio.h>

void main()
{
	int num = 0, j = 9, result = 0;
	printf("숫자를 입력하세요 :");
	scanf_s("%d", &num);

	while (num > 0)
	{
		while (j > 0)
		{
			result = num * j;
			printf("%d * %d = %d\n", num, j, result);
			j--;
		}
		num--;
		j = 9;
		printf("---------\n");
	}

}*/



/* 예제 7-6
#include <stdio.h>

void main()
{
	int num;
	for (num = 0; num < 5; num++)
	{
		printf("반복 내용 : %d\n",num);
	}
	printf(" 반복문 종료 후 : %d", num);
}*/



/* 예제 7-7
#include <stdio.h>

void main()
{
	int i = 0, sum = 0;
	for (i = 0; i <= 10; i++)
	{
		sum = sum + i;
		printf("i = %d ,  sum = %d \n", i, sum);
	}
	printf("-----반복문 종료 -----\n");
}*/



/* 예제 7-8
#include <stdio.h>

void main()
{
	int num = 0, i, result = 0;

	printf("숫자를 입력해주세요 :");
	scanf_s("%d", &num);

	for (i = 0; i < 10; i = i + 2)
	{
		result = num * i;
		printf("%d * %d = %d\n", num, i, result);

	}

}*/



/* 예제 7-9
#include <stdio.h>

void main()
{
	int i;
	for (i = 0; 1; i++)
	{
		printf("반복횟수 : %d \n", i);
	}
}*/




/* 예제 7-10
#include <stdio.h>

void main()
{
	int i, j;
	int result;

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			result = i * j;
				printf("%d * %d = %d\n", i, j, result);
		}
		printf("----------\n");
	}
}*/



/* 예제 문제 7-11
#include <stdio.h>

void main()
{
	int num, j = 9, result = 0;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	for (; num > 0; num--)
	{
		for (j = 9; j > 0; j--)
		{
			result = num * j;
			printf("%d * %d = %d \n", num, j, result);
		}
		printf("----------\n");
	}
}*/



/* 예제 7-12
#include <stdio.h>

void main()
{
	int i;
	int factorial = 1;

	for (i = 1; i <= 10; i++)
	{
		factorial = factorial * i;
	}
	printf("1부터 10까지의 곱 : %d \n", factorial);
}*/



/* 예제 7-13
#include <stdio.h>

void main()
{
	int i = 1, factorial=1;

	for (; i <= 10; i++)
	{
		factorial = factorial * i;

	}
	printf("1부터 10까지의 곱 : %d \n", factorial);
} */



/* 예제 7-14
#include <stdio.h>

void main()
{
	int i, factoral = 1;
	for (i = 1; 1; i++)
	{
		factoral = factoral * i;

		if (i > 9)
			break;
	}
	printf("1부터 10까지의 곱 : %d \n", factoral);

}*/



/* 예제 7-15
#include <stdio.h>

void main()
{
	int i, factoral = 1;

	for (i = 1; i <= 10; )
	{
		factoral = factoral * i;
		i++;
	}
	printf("1부터 10까지의 곱 : %d \n", factoral);
}*/



/* 예제 7-16
#include <stdio.h>

void main()
{
	int num = 10;

	do
	{
		printf("%d", num);
		num++;
	} while (num < 10);

	printf("\n **while 문을 종료 합니다**\n");
}*/



/* 예제 8-12
#include <stdio.h>

void main()
{
	char ch;

	printf("문자를 입력하세요 (q를 입력하면 종료) : ");
	for (;1;)
	{
		scanf_s("%c",&ch,1);
		if (ch == 'q')
			break;

	}
	printf("반복문을 종료 합니다 \n");
}*/



#include <stdio.h>

void main()
{
	int num;

	for (num = 0; num < 101; num++)
	{
		if (num % 2 == 1)
		{
			continue;
		}
		printf("%d\n", num);
	}
}