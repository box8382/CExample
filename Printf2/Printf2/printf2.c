/* 예제 2-2
#include <stdio.h>

void main()
{
	printf("Hello C world \n");
}
*/



/* 예제 2-3
#include <stdio.h>

void main()
{
	printf("\t Hello C! \n Hello world! \n");
	printf("큰따옴표 : \" \" \n");
	printf("작은따옴표 : \' \' \n");
	printf("역슬래시 : \\ \n");
}
*/



/* 예제 2-4
#include <stdio.h>

void main()
{
	printf("%d 더하기 %d는 %d입니다.\n", 3, 5, 3 + 5);
	printf("%i 더하기 %i는 %i입니다.\n", 3, 5, 3 + 5);
	printf("%d - %d = %d입니다.\n", 3, 5, 3-5);
	printf("%i - %i = %i입니다.\n", 3, 5, 3-5);
}
*/



/* 예제 2-5 
(%x 16진수 표현, &o는 8진수 표현)(16진수 8진수는 음수표현 불가능)
#include <stdio.h>

void main()
{
	printf("10진수 : %d는 16진수 : %x, 8진수 : %o 입니다.\n", 50, 50, 50);
	printf("10진수 : %d는 16진수 : %x, 8진수 : %o 입니다.\n", -50, -50, -50);
}
*/



/* 예제 2-6 
(%f는 맨마지막자리를 반올림, %lf는 맨마지막자리를 내림) 
#include <stdio.h>

void main()
{
	printf("10진수 정수 : %d \n", 0.5);
	printf("10진수 실수 : %f \n", 0.5);
	printf("10진수 실수 : %lf \n", 0.5);

	printf("소수점 이하 6자리 이상 : %f \n", 0.5655678);
	printf("소수점 이하 6자리 이상 : %lf \n", 0.5667784);
}
*/



/* 예제 2-6 
(%s 는 문자열을 표현, %d는 숫자를표현, %c 는 한 문자를 표현)
(%s 는 "") (%c는 '')
#include <stdio.h>

void main()
{
	printf("a를 대문자로 표현하면 %c입니다.\n", 'A');
	printf("%s %c입니다. \n", "a를 대문자로 표현하면", 'A');
	printf("%s %d %s\n", "2 곱하기 3은", 2 * 3, "입니다");
}
*/



/* 예제 2-9 
#include <stdio.h>

void main()
{
	printf("%f \n", 0.000123);
	printf("%f \n", 0.0001236);

	printf("%e \n", 0.000123);
	printf("%E \n", 0.0001236);

	printf("%g \n", 0.000123);
	printf("%G \n", 0.0000123456);

	printf("올해 우리나라 경제 성장률은 5%%입니다.\n");
}
*/



/* 예제 2-10
#include <stdio.h>

void main()
{
	printf("%03d, %03d, %03d\n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d\n", 1, 20, 300);
	printf("%+3d, %+3d, %+d\n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d\n", 1, 20, -300);
}
*/



/* 연습문제 1번
#include <stdio.h>

void main()
{
	printf("   *   \n  ***  \n *****\n  ***  \n   *   ");
}
*/




#include <stdio.h>

void main()
{
	int a;
	a = 1;
	while (a < 10)
	{
		printf("2 x %d = %d\n", a,2*a);
		a++;
	}
}
