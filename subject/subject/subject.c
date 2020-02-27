#include <stdio.h>

void main()
{

	char scan[17]; // 입력받을 주민번호의 개수

	int total=0; //입력한 값들의 합
	int total1 = 0;//합값에 나누기11한 값의 남어지
	int total2 = 0; //올바른 주민 판별값

	int num = 0; //확인작업
	int a=2;

	int check = 0;
		printf("주민번호 카드번호 판별기 입니다.\n\n");
		printf("입력 : ");


		for (check = 0; check < 17; check++) //주민번호 총 13개의 값을 입력받음 
		{
			scanf_s("%c", &scan[check], 17);
			if (scan[check] == 45 || scan[check] == 32)
			{
				check--;
				continue;
			}
			if (scan[check] == 10)
			{
				scan[check] = 0;
				break;
			}

			if (check >= 16)
			{
				printf("개인정보가 아닙니다.\n");
				return 0;
			}

		}

		for (int i = 0; i < check; i++)
		{
			if (i == 15)
			{
				if (scan[i] >= 48 && scan[i] <= 57)
				{
					printf("카드번호가 맞습니다.\n");
					return 0;
				}
				else
				{
					printf("개인정보가 아닙니다.\n");
					return 0;
				}
			}
		}

		//---------------------------------
		for (int i = 0; i < 13; i++) //문자로 입력받은 값  즉 아스키코드를 다시 숫자로 바꿔주는작업 
		{
			scan[i] = scan[i] - 48;
		}

		for (int i = 0; i < 12; i++) //그 바꾼 숫자에 곱을 하는작업
		{
			scan[i] = scan[i] * a;
			total += scan[i]; //그 곱한 수의 총합을 구하는작업
			a++;
			if (a == 10)
			{
				a = 2;
				continue;
			}
		}
		//---------------------------------

		total1 = total % 11;
		total2 = 11 - total1;

		if (total2 == scan[12])
			printf("주민번호가 맞습니다.\n");
		else
			printf("개인정보가 아닙니다.\n");
}