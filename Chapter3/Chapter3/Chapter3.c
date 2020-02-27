/* 연습문제 2번
#include <stdio.h>

void main()
{
	int jean = 0;
	jean = 1;
	jean = jean + 1;
	printf("청바지 개수는 : %d 입니다.", jean);

}
*/





/* 연습문제 3번
#include <stdio.h>

void main()
{
	int red = 1, blue = 2;
	int yellow; //빈컵

	printf("before \n");
	printf("red = %d,  blue = %d \n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("after \n");
	printf("red = %d,  blue = %d \n", red, blue);

}
*/





/* 과제 1번문제 
#include <stdio.h>

void main()
{
	int lx, ly;
	int rx, ry;
	int total1, total2,total3;

	printf("좌 상단의 좌표를 입력해주세요\n");
	printf("좌 상단 x좌표 : ");
	scanf_s("%d", &lx);
	printf("좌 상단 y좌표 : ");
	scanf_s("%d", &ly);


	printf("우 하단의 좌표를 입력해주세요\n");
	printf("우 하단 x좌표 : ");
	scanf_s("%d", &rx);
	printf("우 하단 y좌표 : ");
	scanf_s("%d", &ry);


	printf("좌 상단의 x,y 좌표 : %d , %d\n", lx, ly);
	printf("우 하단의 x,y 좌표 : %d , %d\n", rx, ry);

	total1 = ly - lx;
	total2 = ry - rx;
	total3 = total1 * total2;


	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.", total3);
}
*/



/* 과제 2번
#include <stdio.h>

void main()
{
	double num1, num2;
	printf("두개의 실수를 입력해주세요 : ");
	scanf_s("%lf", &num1);
	scanf_s("%lf", &num2);

	printf("두수의 덧셈 값은 %lf 입니다.\n", num1 + num2);
	printf("두수의 뺄셈 값은 %lf 입니다.\n", num1 - num2);
	printf("두수의 곱셈 값은 %lf 입니다.\n", num1 * num2);
	printf("두수의 나눗셈 값은 %lf 입니다.\n", num1 / num2);
}
*/


/* 과제 3번 
#include <stdio.h>

void main()
{
	int ASCII;
	printf("ASCII 값의 정수를 입력해주세요 : ");
	scanf_s("%d", &ASCII);
	printf("해당 숫자의 ASCII코드 값은 %c 입니다.", ASCII);
}
*/



// 과제 4번
#include <stdio.h>

void main()
{
	char a;
	printf("정수를 입력해주세요 : ");
	scanf_s("%c", &a);
	printf("정수값의 ASCII 코드는 %d 입니다.",a);
}