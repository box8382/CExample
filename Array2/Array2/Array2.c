/* 예제 2-1
#include <stdio.h>

void main()
{
	int array[4][3];

	array[0][0] = 1; array[0][1] = 2;  array[0][2] = 3;
	array[1][0] = 4; array[1][1] = 5;  array[1][2] = 6;
	array[2][0] = 7; array[2][1] = 8;  array[2][2] = 9;
	array[3][0] = 10; array[3][1] =11;  array[3][2] = 12;

	printf("%d %d %d\n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d\n", array[1][0], array[1][1], array[1][2]);
	printf("%d %d %d\n", array[2][0], array[2][1], array[2][2]);
	printf("%d %d %d\n", array[3][0], array[3][1], array[3][2]);
} */



/* 예제 2-3
#include <stdio.h>

void main()
{
	int array1[4][3] = { {1,2},{3},{4},{5}};
	int array2[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10} };

	printf("%d %d %d\n", array1[0][0], array1[0][1], array1[0][2]);
	printf("%d %d %d\n", array1[1][0], array1[1][1], array1[1][2]);
	printf("%d %d %d\n", array1[2][0], array1[2][1], array1[2][2]);
	printf("%d %d %d\n", array1[3][0], array1[3][1], array1[3][2]);

	printf("-------------------------\n");

	printf("%d %d %d\n", array2[0][0], array2[0][1], array2[0][2]);
	printf("%d %d %d\n", array2[1][0], array2[1][1], array2[1][2]);
	printf("%d %d %d\n", array2[2][0], array2[2][1], array2[2][2]);
	printf("%d %d %d\n", array2[3][0], array2[3][1], array2[3][2]);
}*/




/* 예제 2-4
#include <stdio.h>

void main()
{
	int array[2][2];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("정수를 입력하세요 : ");
			scanf_s("%d", &array[i][j]);
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d",array[i][j]);
		}
	}
}*/




/* 예제 2-5
#include <stdio.h>

void main()
{
	int i, j, k;
	int array[3][3][3] = { {1,2,3,4,5,6,7,8,9},
	{10,11,12,13,14,15,16,17,18},
	{19,20,21,22,23,24,25,26,27},
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				printf("%d", array[i][j][k]);
			}
			printf("\n");
		}
		printf("-----------------\n");
	}
}*/




/* 연습문제 1번
#include <stdio.h>

void main()
{
	int array1[2][4] = { { 1,2,3,4 },{5,6,7,8} };
	int array2[4][2] = { {5,1},{6,2},{7,3},{8,4} };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d  ", array1[i][j]);
		}
		printf("\n");
	}
	printf("------------------\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d  ", array2[i][j]);
		}
		printf("\n");
	}
} */




/* 연습문제 2번 
#include <stdio.h>

void main()
{
	int home[3][3];
	int sum=0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d층 %d호의 가족은 몇명입니까? : ",i+1,j+1);
			scanf_s("%d", &home[i][j]);
			sum += home[i][j];
		}
	}
	printf("열혈 아파트 총 주민수는 %d명입니다.",sum);
}*/





/* 연습문제 3번
#include <stdio.h>

void main()
{
	int array[9][9];
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			array[i-1][j-1] = i * j;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %d\n", i, j,array[i -1][j - 1]);
		}
		printf("-------------------\n");
	}
}*/




// 연습문제 4번
#include <stdio.h>

void main()
{
	int array1[4][3] = {
	{23,75,85},
	{12,77,51},
	{25,66,30},
	{19,90,88}
	};

	int array2[4][3] = {
	{11,15,47},
	{74,85,69},
	{57,86,28},
	{90,22,33}
	};

	int sumarray1[2][4] = { 0 };
	int sumarray2[2][4] = { 0 };

	int sumtotal[2][4] = { 0 };
	int mitotal[2][4] = { 0 };

	for (int i = 0; i < 4; i++) // 가로줄들 끼리의 합
	{
		for (int j = 0; j < 3; j++)
		{
			sumarray1[0][i] += array1[i][j];
			sumarray2[0][i] += array2[i][j];
		}
	}

	//sumarray[0][0~2] 까지 가로줄 합 저장 

	for (int i = 0; i < 3; i++) // 세로줄들 끼리의 합
	{
		for (int j = 0; j < 4; j++)
		{
			sumarray1[1][i] += array1[j][i];
			sumarray2[1][i] += array2[j][i];
		}
	}

	//sumarray[1][0~3] 까지 가로줄 합 저장


	for (int i = 0; i < 4; i++)
	{
		sumtotal[0][i] = sumarray1[0][i] + sumarray2[0][i];
		mitotal[0][i] = sumarray1[0][i] - sumarray2[0][i];
	}
	//sumtotal[0][0~3] 두개의 가로줄들의 합계
	//sumtotal[0][0~3] 두개의 가로줄들의 차

	for (int i = 0; i < 3; i++)
	{
		sumtotal[1][i] = sumarray1[1][i] + sumarray2[1][i];
		mitotal[1][i] = sumarray1[1][i] - sumarray2[1][i];
	}
	//sumtotal[1][0~2] 두개의 가로줄들의 합계
	//sumtotal[1][0~2] 두개의 가로줄들의 차

	for (int i = 0; i < 4; i++) 
	{
		printf("%d 번째 가로줄의 합계 %d\n",i+1,sumtotal[0][i]);
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d 번째 가로줄의 차 %d\n", i + 1, mitotal[0][i]);
	}
	printf("---------------------------\n");
	
	for (int i = 0; i < 3; i++)
	{
		printf("%d 번째 세로줄의 합계 %d\n", i + 1, sumtotal[1][i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d 번째 세로줄의 차 %d\n", i + 1, mitotal[1][i]);
	}
}