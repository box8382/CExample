/*배열의 기본적인 사용법
#include <stdio.h>

void main()
{
	int arr[5];
	
	for (int i = 0; i < 5; i++)
	{
		printf("%d 번 학생 점수 입력 : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d번 학생 점수는 %d 입니다.\n",i+1,arr[i]);
	}
}*/



/* 응용
#include <stdio.h>

void main()
{
	int score[5];
	int total=0;
	

	for (int i = 0; i < 5; i++)
	{
		printf("정수 입력 : ");
		scanf_s("%d", &score[i]);
		total = total + score[i];
	}

	double aver = (double)total / (double)5;
	
	printf("5개의 합은 %d 입니다 ", total);
	printf("5개의 합의 평균은 %.2lf 입니다 ", aver);
} */



/* 예제 1-1
#include <stdio.h>

void main()
{
	int student[5];

	student[0] = 90;
	student[1]=80;
	student[2]=70;

	printf("첫 번째 학생의 점수 : %d \n", student[0]);
	printf("두 번째 학생의 점수 : %d \n", student[1]);
	printf("세 번째 학생의 점수 : %d \n", student[2]);
	printf("네 번째 학생의 점수 : %d \n", student[3]);
	printf("다섯 번째 학생의 점수 : %d \n", student[4]);
}*/



/* 예제 1-2
#include <stdio.h>

void main()
{
	int array1[5] = { 90,80,70,60,50 };
	int array2[] = { 90,80,70,60,50 };
	int array3[5] = { 90,80,70 };

	printf("%d %d %d %d %d\n", array1[0], array1[1], array1[2], array1[3], array1[4]);
	printf("%d %d %d %d %d\n", array2[0], array2[1], array2[2], array2[3], array2[4]);
	printf("%d %d %d %d %d\n", array3[0], array3[1], array3[2], array3[3], array3[4]);
}*/



/* 예제 1-3
#include <stdio.h>

void main()
{
	int array[3] = { 87,99,80 };
	int total = 0;

	total = array[0] + array[1] + array[2];
	printf("총점은 %d 이고 ", total);
	printf("평균은 %.2lf입니다.",(double)total / 3);
}*/



/* 예제 1-4
#include <stdio.h>

void main()
{
	int array[3] = { 87,65,78 };
	int i, total = 0;

	for (i = 0; i < 3; i++)
	{
		total = total + array[i];
		printf("배열의 요소 array[%d]의 값 : %d \n", i, array[i]);

	}
	printf("총점은 %d 이고 \n", total);
	printf("평균은 %.2lf 입니다.\n", (double)total / 3);
}*/



/* 예제 1-5
#include <stdio.h>

void main()
{
	int array1[3] = { 1,2,3 };
	char array2[3] = { 'A','B','C' };

	printf("%x %x %x \n ", &array1[0], &array1[1], &array1[2]);
	printf("%x %x %x \n ", &array2[0], &array2[1], &array2[2]);
} */



/* 연습문제 1번
#include <stdio.h>

void main()
{
	int a=0;
	char abc[6] = { 'A','B','C'};

	for(int i=5;i>2;i--)
	{
		abc[i] = abc[a];
		a++;
	}

	printf("%c %c %c\n", abc[0], abc[1], abc[2]);
	printf("%c %c %c %c %c %c", abc[0], abc[1], abc[2],abc[3],abc[4],abc[5]);
} */



/* 연습문제 2번 
#include <stdio.h>

void main()
{
	int abc[10];
	int total=0;

	for (int i = 0; i < 10; i++)
	{
		printf("학생의 성적을 입력하세요 : ");
		scanf_s("%d", &abc[i]);
		total += abc[i];
	}
	double total2;
	total2 = (double)total / 10;

		printf("학생의 성적 합계는 %d 이고 평균은 %lf입니다.", total, total2);
} */



/* 연습문제 3번
#include <stdio.h>

void main()
{
	int a[5] = { 90,78,77,98,98 };
	int total[3] = { 0 };
	int b[5] = { 80,45,67,88,57 };
	int galo[5] = { 0 };
	int c[5] = { 88,99,65,55,74 };
	int sum=0;

	for (int i = 0; i < 5; i++) // 가로줄들
	{
			total[0] += a[i];
			total[1] += b[i];
			total[2] += c[i];
	}

	for (int i = 1; i < 4; i++)
	{
		printf("%d 번째 가로줄의 합은 %d입니다 \n",i,total[i-1]);
	}

	for (int i = 0; i < 5; i++) // 세로줄들
	{
		galo[i] += a[i]+b[i]+c[i];
	}
	printf("----------------------------\n");
	for (int i=0;i<5;i++)
	{
		printf("%d 번째 세로줄의 합은 %d입니다 \n", i+1,galo[i]);
	}


	for (int i = 0; i < 5; i++)
		sum += galo[i];

	printf("----------------------\n");
	printf("총합은 %d 입니다.",sum);
}*/



/* 과제 4번
#include <stdio.h>

void main()
{
	int abc[9];
	int dan;

	printf("구구단 출력 프로그램 입니다 원하시는 구구단을 입력하세요 : ");
	scanf_s("%d", &dan);

	for (int i = 1; i < 10; i++)
	{
		abc[i - 1] = dan * i;
		printf("%d * %d = %d\n", dan, i,abc[i-1]);
	}
}*/




#include <stdio.h>

void main()
{
	double a[5] = { 2.2, 3.5, 2.5, 10.1, 4.0 };
	double b[5] = { 3.3, 2.0, 4.0, 1.0, 2.5 };
	double total[5];

	for (int i = 0; i < 5; i++)
	{
		total[i] = a[i] * b[i];
		printf("%d번째 세로 곱은 %lf 입니다.\n", i + 1, total[i]);
	}
}
