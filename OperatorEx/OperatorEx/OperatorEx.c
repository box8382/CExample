/* 연습문제 1번
#include <stdio.h>

void main()
{
	int x, y, z;
	printf("세개의 정수를 입력해주세요.\n");
	printf("정수입력 : ");
	scanf_s("%d", &x);
	printf("정수입력 : ");
	scanf_s("%d", &y);
	printf("정수입력 : ");
	scanf_s("%d", &z);

	printf("입력한 값의 결과는 %d 입니다", (x + y) * (x + z) / (y % z));
}
*/



/* 연습문제 2번
#include <stdio.h>

void main()
{
	int a, b,c;
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);

	c = (b < a) ? b : a;
	printf("둘중 더 작은 값은 %d 입니다.",c);

}
*/



/* 연습문제 3번
#include <stdio.h>

void main()
{
	int x = 3, y = 5, z = 3, k = 2;
	int a;

	a = x < y || x < z && z < k;
	printf("결과값 1 a : %d \n", a);

	a = (x < y || x < z) && z < k;
	printf("결과값 2 a : %d \n", a);
}
*/



/* 연습문제 4번
#include <stdio.h>

void main()
{
	int a, b, c,d;
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);
	printf("입력 : ");
	scanf_s("%d", &c);

	d = (a < b && b>c) ? b :
		(a<c) ? c : a;
	printf("입력한 값중 가장 큰값은 %d 입니다.", d);
}
*/




/* 연습문제 5번 
#include <stdio.h>

void main()
{
	int num1, num2 = 1155;
	printf("환율 시스템 달러를 적어주세요 : ");
	scanf_s("%d", &num1);
	printf("원화로 %d원 입니다", num1 * num2);
}
*/




/* 연습문제 6번 이게 맞는지모르겠음 (수명이 너무 크게 단축됨;)
#include <stdio.h>

void main()
{
	int a, b;
	int life1, life2;
	int total1;


	printf("수명을 체크해드립니다\n한개피울시 2000분 단축으로 가정\n인간의 수명을 100년으로 가정\n");
	printf("당신은 하루에 담배를 몇개를 피시나요 ? : ");
	scanf_s("%d", &a);
	total1 = a * 2000;


	printf("당신은 몇년간 담배를 피워왔나요? :");
	scanf_s("%d", &b);


	total1 = total1 * 365;
	life1 = total1 * b;
	life2 = life1 / 525600;
		printf("당신의 수명은 %d분 만큼 단축되었고 %d살 이 단축 되었고 %d 살까지 살수있습니다.",life1,life2,80-life2);
}*/





/* 연습문제 7번 맞는건지 모르겠음 (작동은 되지만 사용자가 0또는1 말고 다른수를 입력해도 값이 출력됨; )
#include <stdio.h>

void main()
{
	int a, b, c, d;
	int total;
	printf("2진수를 10진수로 변환해주는 장치입니다. ( 0과 1만 입력해주세요 )\n");
	printf("2진수의 첫번째 자리를 입력해주세요 : ");
	scanf_s("%d", &d);
	printf("2진수의 두번째 자리를 입력해주세요 : ");
	scanf_s("%d", &c);
	printf("2진수의 세번째 자리를 입력해주세요 : ");
	scanf_s("%d", &b);
	printf("2진수의 네번째 자리를 입력해주세요 : ");
	scanf_s("%d", &a);


	printf("입력한 값은 %d%d%d%d 입니다\n",a,b,c,d);
	printf("입력한 값의 2진수를 10진수로 출력합니다 : %d 입니다.\n",(d*1)+(c*2)+(b*4)+(a*8) );

}*/




/* 연습문제 8번
#include <stdio.h>

void main()
{
	int a, b, c;
	int total;

		printf("시간입력 프로그램입니다.\n현재시간을 입력해주세요\n\n");
		printf("시간 : ");
		scanf_s("%d", &a);
		printf("분 : ");
		scanf_s("%d", &b);
		printf("초 : ");
		scanf_s("%d", &c);

	printf("현재 시각은 %02d : %02d : %02d 입니다 \n", a, b, c);
	a = a * 3600;
	b = b * 60;
	total = a + b + c;
	printf("입력한 시간은 00:00 시 기준으로 %d 초가 지났습니다", total);

}*/



/* 연습문제 9번
#include <stdio.h>

void main()
{
	int a;
	const double pound=0.45;

	printf("밀가루 몇 파운드입니까? : ");
	scanf_s("%d", &a);
	printf("밀가루는 총 몇%lf kg 입니다.", (double)a * (double)pound);

}*/



/*  연습문제 10번
#include <stdio.h>

void main()
{
	int a;
	const double feet = 30.48;

	printf("고도를 입력해주세요 : ");
	scanf_s("%d", &a);
	printf("지상으로 부터의 거리는 %lf m입니다.", (double)a * (double)feet/100);
}  */



/* 과제1 번
#include <stdio.h>

void main()
{
	double a;
	double b = 1.609;
	printf("마일을 입력하시오 : ");
	scanf_s("%lf", &a);

	printf("%.0lf 마일은 %lf 킬로미터 입니당",a,a*b);
}
*/



/* 과제 2번 문제
#include <stdio.h>

void main()
{
	int num1,num2;
	int a, b;

	printf("받은 돈을 입력해주세요 : ");
	scanf_s("%d", &num1);
	printf("상품의 가격을 입력해주세요 : ");
	scanf_s("%d", &num2);

	a = num2 / 10; // 부가세
	b = num1 - num2 - a;

	printf("\n\n받은돈 : %d\n상품가격 : %d\n\n부가세 : %d\n잔돈 : %d\n", num1, num2, a, b);
}*/



/* 과제 3번 문제
#include <stdio.h>

void main()
{
	const double pi=3.14;
	double r;

	printf("원의 반지름을 입력해주세요 :");
	scanf_s("%lf", &r);

	printf("원의 면적은 %lf 입니다.", pi * r * r);
} */



/* 과제 4번 
#include <stdio.h>

void main()
{
	int num;
	int total;

	printf("정수를 입력해주세요 ");
	scanf_s("%d", &num);

	total = (num < 0) ? num * -1 : num;

	printf("입력하신 정수의 절대값은 %d 입니다", total);
}*/




/* 과제 5번 문제
#include <stdio.h>

void main()
{
	char ca;
		int cb;

	printf("대소문자 변환 프로그램 입니다 : ");
	scanf_s("%c", &ca,1);

	cb = (ca >= 65 && ca <=90 ) ? ca+32 : 
		(ca>=97 &&  ca <= 122)? ca-32 : ca ;

	printf("입력한 문자의 변환은 %c 입니다 ", cb);

}*/



// 과제 6번 최대값 최소값 오류 잘안됌
#include <stdio.h>

void main()
{
	int a, b, c;
	int to1, to2;

	printf("세개의 정수를 입력해주세요\n\n");
	printf("입력 : ");
	scanf_s("%d", &a);
	printf("입력 : ");
	scanf_s("%d", &b);
	printf("입력 : ");
	scanf_s("%d", &c);

	to1 = (a >= b) ? a : 
		(b >= c)? b : c;

	to2 = (a <= b) ? a :
		(b <= c) ? b : c;

	printf("입력한 결과를 출력합니다.. \n");
	printf("합 : %d \n",a+b+c);
	printf("평균 : %.2lf \n", (double)(a + b + c) / (double)3);
	printf("최대값 : %d \n", to1);
	printf("최소값 : %d \n", to2);
}