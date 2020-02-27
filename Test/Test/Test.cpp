/*
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "[국어] [영어] [수학] 점수 입력 :";
	cin >> a >> b >> c; 

	cout << "[국어] : " << a << endl;
	cout << "[영어] : " << b << endl;
	cout << "[수학] : " << c << endl;

	cout << "[합계] : " << a + b + c << endl;
}*/



/* 5.1번 문제
#include <iostream>
using namespace std;

int main()
{
	int input;
	cout << "정수입력 : ";
	cin >> input;

	if (input % 3 == 0 && input % 4 == 0)
		cout << input << "은 3의배수 이면서, 4의 배수입니다" << endl;
	else if (input % 3 == 0)
		cout << input << "은 3의 배수입니다" << endl;
	else if (input % 4 == 0)
		cout << input << "은 4의 배수입니다" << endl;
	else
		cout << input << "은 3의배수도 4의배수도 아닙니다." << endl;

}*/



/* 6.1번 문제
#include <iostream>
using namespace std;

int main()
{
	int k = 5;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << "*";
		}
		k--;
		cout << endl;
	}
}*/




/* 6.2문제
#include <iostream>
using namespace std;

int main()
{
	cout << "-----가로줄 출력-----" << endl;
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10;j++)
		{
			cout << i << "*" << j << "=" << i * j << "    ";
		}
		cout << endl;
	}
	cout << endl << endl;

	cout << "-----세로줄 출력-----" << endl;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			cout << j << "*" << i << "=" << i * j << "    ";
		}
		cout << endl;
	}
}*/




/* 예제 7.3 문제
#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	do
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
		i++;
	} while (i <= 100);
	printf("짝수들의 총합은 : %d", sum);
}*/



/* 문제 7.1 
#include <stdio.h>

int main()
{
	int num;
	int clock = 0;
	int min;
	int i;

	while (1)
	{
		printf("분 입력 <0 종료> : ");
		scanf_s("%d", &num);
		if (num == 0)break;

		for (i = 1; i <= num; i++)
		{
			if (i % 60 == 0)clock++;
		}
		min = num - (clock * 60);

		if (num < 0)
		{
			printf("0보다 작은수는 입력하실 수 없습니다.");
			continue;
		}

		printf("[%d분]은 [%d시간 %d분] 입니다.\n\n", num, clock, min);
		clock = 0;
	}
}*/




/* 7.2번 문제
#include <stdio.h>

int main()
{
	char input;
	while (1)
	{
		printf("문자 입력 : ");
		scanf_s("%c", &input,1);
		if(input == 10)scanf_s("%c", &input, 1);
		
		printf("문자 : %c   ===>  아스키코드 : %d\n", input, input);
		printf("계속<아무키> / 종료<S/s>\n\n");
		if (input == 115 || input == 83)break;
	}
}*/




/* 예제 8.2 번 문제 
#include <stdio.h>

int main()
{
	int num[5];
	int max;
	int min;

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 입력 : ",i+1);
		scanf_s("%d", &num[i]);
	}
	max = num[0];
	min = num[0];

	for (int i = 1; i < 5; i++)
	{
		if (max < num[i])max = num[i];
		if (min > num[i])min = num[i];
	}
	

	printf("입력한값에 최대값은 %d 입니다\n",max);
	printf("입력한값에 최소값은 %d 입니다\n", min);
}*/






/* 문제 8.1 
#include <stdio.h>

int main()
{
	char input[100];
	int i;

	printf("문자열 입력 : ");
	for(i=0;i<100;i++)
	{
		scanf_s("%c", &input[i],100);
		if (input[i] == 10)
		{
			input[i] = 0;
			break;
		}
	}
	
	printf("변경된 문자열 : ");
	for (int j = i+1; j >= 0; j--)
	{
		printf("%c", input[j]);
	}
}*/





/* 문제 8.2 
#include <stdio.h>

int main()
{
	char input[100];
	int output;
	int i;


	printf("문자열 입력 : ");
	for (i = 0; i < 100; i++)
	{
		scanf_s("%c",&input[i],100);
		if (input[i] == 10)
		{
			input[i] = 0;
			break;
		}
	}
	output = input[0];

	for (int k = 1; k < i; k++)
	{
		if (output < input[k])output = input[k];
	}

	printf("아스키 코드값이 가장 큰 문자 : %c",output);

}*/






/* 문제 9.1 
#include <stdio.h>

int main()
{
	int dan[8][8];

	for (int i = 2; i < 10; i++)
	{
		for (int k = 2; k < 10; k++)
		{
			dan[i-2][k-2] = i * k;
			printf("%2d  ", dan[i-2][k-2]);
		}
		printf("\n");
	}
}*/






/* 문제 10.1
#include <stdio.h>
double power(int n);


int main()
{
	double re;
	int n;

	printf("제곱을 구할 숫자 입력 : ");
	scanf_s("%d", &n);

	re = power(n);
	printf("%d의 제곱은 %.0f입니다. \n", n, re);

}


double power(int n)
{
	return n * n;
}*/





/* 10.4 문제
#include <stdio.h>
int maxto(int i, int j, int k);
int minto(int i, int j, int k);

int main()
{
	int input1, input2, input3;
	int max, min;
	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &input1, &input2, &input3);

	max = maxto(input1, input2, input3);
	min = minto(input1, input2, input3);

	printf("가장 큰 수 : %d\n",max);
	printf("가장 작은 수 : %d\n",min);
}

int maxto(int i,int j,int k)
{
	if (i > j && i>k)return i;
	else if (j > k)return j;
	else return k;
}

int minto(int i, int j, int k)
{
	if (i < j && i<k)return i;
	else if (j < k)return j;
	else return k;
}*/





