/*
#include <stdio.h>

void main()
{
	int num1;
	printf("당신의 학점은 몇점 입니까? : ");
	scanf_s("%d", &num1);
	if (num1 > 100 || num1 <0)
	{
		printf("점수를 잘못입력하셨습니다... ");
	}
	else if (num1 >= 90)
	{
			printf("당신의 등급은 A 입니다 \n");
	}
	else if (num1 >= 80)
	{
		printf("당신의 등급은 B 입니다 \n");
	}
	else if (num1 >= 70)
	{
		printf("당신의 등급은 C 입니다 \n");
	}
	else if (num1 >= 60)
	{
		printf("당신의 등급은 D 입니다 \n");
	}
	else
	{
		printf("당신의 등급은 F 입니다 \n");
	}
	printf("프로그램을 종료합니다 \n");
}*/




/*
#include <stdio.h>

void main()
{
	int score;
	printf("당신의 학점은 몇점입니까 ? : ");
	scanf_s("%d", &score);
	if (score >= 90)
	{
		printf("당신의 등급은 A 입니다 \n");
	}
	else
	{
		if (score >= 80)
		{
			printf("당신의 등급은 B 입니다 \n");
		}
		else
		{
			if (score >= 70)
			{
				printf("당신의 등급은 C 입니다 \n");
			}
			else
			{
				if (score >= 60)
				{
					printf("당신의 등급은 D 입니다 \n");
				}
				else
				{
					printf("당신의 등급은 F 입니다 \n");
				}
			}

		}
	}
}
*/



/*
#include <stdio.h>

void main()
{

	printf("학점을 입력받아 점수대를 출력해주는 프로그램 입니다\n\n");

	char grade;
	printf("학점 입력 : ");
	scanf_s("%c", &grade, 1);

	//학점에 따른 점수대를 출력해주기!!
	switch (grade)
	{
	case 'A':
	case'a':
		printf("입력한 학점은 90~100 사이입니당\n");
		break;
	case 'B':
		printf("입력한 학점은 80~89 사이입니당\n");
		break;
	case 'C':
		printf("입력한 학점은 70~79 사이입니당\n");
		break;
	case 'D':
		printf("입력한 학점은 60~69 사이입니당\n");
		break;
	case 'F':
		printf("입력한 학점은 59 이하입니다\n");
	default:
		printf("잘못입력했습니당다아닫앋앙");
	}
}
*/



/* 예제 8-1
#include <stdio.h>

void main()
{
	int num;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	if (num >= 0)
	{
		printf("양수입니다.\n");
	}

	if (num < 0)
	{
		printf("음수입니다\n");
	}
}
*/



/* 예제 8-3
#include <stdio.h>

void main()
{
	int age;

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	if (age >= 15 && age <= 100)
	{
		printf("회원 가입이 가능합니다\n");
	}
	else
	{
		printf("회원 가입이 불가능 합니다.\n");
	}
}*/


/* 예제 8-4
#include <stdio.h>

void main()
{
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0보다 큰 수가 num에 저장 \n");
	}
	else
	{
		printf("0또는 0보다 작은 수가 num에 저장 \n");
	}
}*/



/* 예제 8-5
#include <stdio.h>

void main()
{
	int num;

	printf(" 숫자 입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0보다 큰수가 num에 저장\n");
	}
	if (num == 0)
	{
		printf("0이 num에 저장\n");
	}
	else
	{
		printf("0보다 작은 수가 num에 저장\n");
	}

}*/



/* 예제 8-6
#include <stdio.h>

void main()
{
	int num;

	printf(" 숫자 입력 : ");
	scanf_s("%d", &num);

	if (num > 0)
	{
		printf("0보다 큰 수가 num에 저장\n");
	}
	else if (num == 0)
	{
		printf("0이 num에 저장");
	}
	else
	{
		printf("0보다 작은 수가 num에 저장\n");
	}
}*/



/* 에제 8-7
#include <stdio.h>

void main()
{
	int num;

	printf("C언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+입니다.\n");
	}
	else
	{
		if (num >= 90)
		{
			printf("A입니다.\n");
		}
		else
		{
			if (num >= 85)
			{
				printf("B+입니다\n");
			}
			else
			{
				if (num >= 80)
				{
					printf("B입니다.\n");
				}
				else
				{
					printf("F입니다\n");
				}
			}
		}
	}
}*/



/* 예제 8-8
#include <stdio.h>

void main()
{
	int num;

	printf("C언어 성적 입력 : ");
	scanf_s("%d", &num);

	if (num >= 95)
	{
		printf("A+입니다.\n");
	}
	else if (num >= 90)
	{
		printf("A입니다.\n");
	}
	else if (num >= 85)
	{
		printf("B+입니다\n");
	}
	else if (num >= 80)
	{
		printf("B입니다.\n");
	}
	else
	{
		printf("F입니다\n");
	}
}*/



/* 예제 8-9
#include <stdio.h>

	void main()
	{
		int num;

		printf("C언어 성적 입력 : ");
		scanf_s("%d", &num);

		if (num >= 95)
		{
			printf("A+입니다.\n");
		}
		if (num >= 90)
		{
			printf("A입니다.\n");
		}
		if (num >= 85)
		{
			printf("B+입니다\n");
		}
		if (num >= 80)
		{
			printf("B입니다.\n");
		}
		else
		{
			printf("F입니다\n");
		}
}*/



/* 예제 8-10
#include <stdio.h>

void main()
{
	int num;
	printf("몇 번 스위치를 누르시겠습니까? : ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("전등이 켜짐 \n");
			break;
	case 2:
		printf("전등이 꺼짐\n");
		break;
	case 3:
		printf("전등이 고장\n");
		break;
	default:
		printf("스위치 오류 : 우리집 스위치는 1번 ~ 3번까지만 있습니다. \n");
	}
}*/



#include <stdio.h>

void main()
{
	char ch;

	printf(" (T) hursday ,  (F) riday,  (S)aturday \n");
	printf("문자 입력 (T, F, S) : ");
	scanf_s("%c", &ch, 1);


	switch (ch)
	{
	case 'T':
	case 't':
		printf("Thursday\n");
		break;

	case 'F':
	case 'f':
		printf("Friday\n");
		break;

	case 'S':
	case 's':
		printf("Saturday\n");
		break;

	default:
		printf("잘못 입력되었습니당.\n");
	}
}