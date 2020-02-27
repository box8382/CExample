/* 과제 1번 문제 
#include <stdio.h>

void main()
{
	int total=0;
	int array[5];
	int a, b=0;

	for (int i = 0; i < 5; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &array[i]);
		total += array[i];
	}
	a = array[0];
	b = array[0];

	for (int i = 1; i < 5; i++)
	{
		if(a>array[i])
		a = array[i];
		if(b<array[i])
		b = array[i];
	}

	printf("입력된 값의 최대값은 %d 입니다.\n", a);
	printf("입력된 값의 최소값은 %d 입니다.\n", b);
	printf("입력된 값의 총합은 %d 입니다.\n", total);
}*/




/* 과제 2번 문제
#include <stdio.h>

void main()
{
	char ch[30];
	int num = 0;

	printf("글자의 길이를 계산하는 프로그램입니다.\n\n");

	for (int i = 0; i < 30; i++)
	{
		scanf_s("%c",&ch[i], 30);
		if (ch[i] == 10)
		{
			ch[i] = 0;
			break;
		}
		num++;
	}

	printf("입력한 글자는 %s 입이고 글자의 수는 %d 입니다.", ch,num);
}*/






/* 과제 3번 문제
#include <stdio.h>

void main()
{
	char name[30];
	char a;

	for (int i = 0; i < 30; i++)
	{
		scanf_s("%c", &name[i], 30);
		if (name[i] == 10)
		{
			name[i] = 0;
			break;
		}
	}
	a = name[0];
	for (int i = 1; i < 30; i++)
	{
		if (a < name[i])
		{
			a = name[i];
		}
	}
	printf("아스키 코드값중 가장큰 값을 출력 : %c", a);
}*/




/* 과제 4번 문제
#include <stdio.h>

void main()
{
	char name[30];
	int num = 0;

	for (int i = 0; i < 30; i++)
	{
		scanf_s("%c", &name[i], 30);
		if (name[i] == 10)
		{
			name[i] = 0;
			break;
		}
		num++;
	}

	for (; num+1 > 0; num--)
	{
		printf("%c", name[num]);
	}
}*/




/* 과제 5번 문제
#include <stdio.h>

void main()
{
	int human[10];
	int num;
	double sum=0;

	while (1)
	{
		printf("학생의 수를 입력하시오 : ");
		scanf_s("%d", &num);
		if (num > 10 || num<0)
		{
			printf("학생의 수는 10명이 최대입니다 다시 입력해주세요\n");
			continue;
		}
		break;
	}

	for (int i=0;i<num;)
	{
		printf("학생 %d의 성적을 입력하세요 :",i+1);
		scanf_s("%d", &human[i]);
		if (human[i] > 100 || human[i]<0)
		{
			printf("잘못된 성적 입니다.\n");
			continue;
		}
		sum += (double)human[i];
		i++;
	}

	printf("총 %d명의 학생의 평균 점수는 %.2lf 입니다.", num, (sum / (double)num));
}*/




/* 과제 6번
#include <stdio.h>

void main()
{
	int arr[10] = { 0 };
	int num;

	for (int i = 0; i < 10; i++)
	{
		printf("input : ");
		scanf_s("%d", &num);

		for (int k = 0; k < 10; k++)
		{
			if (num >= 10 * k + 1 && num <= 10 * (k + 1))
			{
				arr[k]++;
				break;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int k = 0; k <arr[i]; k++)
		{
			printf("*");
		}
		printf("\n");
	}
} */



/* 과제 7번 문제
#include <stdio.h>
int aaa();

void main()
{
	int choice;
	int num[10] = { 0,0,0,0,0,1,1,1,0,1 };
	int to;

	choice = aaa();
	if (choice == 1)
	{
		while (1)
		{
			printf("\n현재의 예약 상태는 다음과 같습니다.\n");
			printf("---------------------\n");
			printf("좌석 번호 1  2  3  4  5  6  7  8  9  10\n");
			printf("---------------------\n");
			printf("예약 상태 0  0  0  0  0  1  1  1  0  1\n");
			printf("몇번째 좌석을 예약하시겠습니까? ");
			scanf_s("%d", &to);
			if (num[to - 1] == 0)
				printf("%d번 좌석이 예약되었습니다.\n", to);
			else if (num[to - 1] == 1)
			{
				printf(" 죄송합니다. 이미 예약된 좌석입니다. 다른 좌석을 선택해 주세요.\n");
				continue;
			}
			else
				printf("1~10까지의 좌석만 입력해주세요!!\n");

			choice = aaa();
			if (choice == 1)
				continue;
			else
				break;
		}
	}
	else
		printf("예약을 종료합니다.\n");

	printf("예약을 종료합니다.\n");
}


int aaa()
{
	int choice;
	while (1)
	{
		printf("좌석을 예약하시겠습니까( 1(Y) 또는 0(N) )? : ");
		scanf_s("%d", &choice);
		if (choice == 1)
		{
			return choice;
		}
		else if (choice == 0)
		{
			return choice;
		}
		else
		{
			printf("1과 0의 숫자만 입력해주세요!!\n\n");
			continue;
		}
	}
}*/




/* 과제 8번 문제
#include <stdio.h>

void main()
{
	int arr1[5] = { 10,20,30,40,50 };
	int arr2[5] = { 1,2,3,4,5 };
	int arr3[5];
	int num=4;

	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[num - i];
		printf("%d  ", arr3[i]);
	}
}*/




/* 과제 9번 문제
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
	int arr[25];

	srand(time(NULL));

	for (int i = 0; i < 25; i++)
	{
		arr[i] = rand()%25+1; // 0~24 = 1~25 까지가됨 
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k]) // 중복되면 
			{
				i--;
				break;
			}
		}
	}

	for (int i = 0; i < 25; i++) //출력 문
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}
		printf(" %2d ", arr[i]);
	}
}*/



// 과제 10번 문제 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
	int arr[25];

	srand(time(NULL));

	for (int i = 0; i < 25; i++)
	{
		arr[i] = rand()%25+1; // 0~24 = 1~25 까지가됨
		for (int k = 0; k < i; k++)
		{
			if (arr[i] == arr[k]) // 중복되면
			{
				i--;
				break;
			}
		}
	}

	for (int i = 0; i < 25; i++) //출력 문
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}
		printf(" %2d ", arr[i]);
	}

	printf("\n\n");
	int arr2[5][5];
	int x = 0;
	int y=0;

	for (int i = 0; i < 25; i++)
	{
		// 1차원을 2차원으로 바꾸는 식 
		y = i / 5; // 층 
		x = i % 5; // 호실 
		arr2[y][x] = arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf(" %2d ", arr2[i][k]);
		}
		printf("\n");
	}
	// 2차원 > 1차원으로 바꾸는식 
	//i = y*5+x // 층번호 * 한줄의개수 + 호실번호 
}