/* 문제 1번
#include <stdio.h>

void main()
{
	printf("홍길동\n홍 길 동\n홍  길  동");
}
*/



/* 문제 2번
#include <stdio.h>

void main()
{
	printf("이름 : 김철수\n");
	printf("주소 : 서울특별시 구로구 어딘가\n");
	printf("전화번호 : 010-0000-0000\n");
}
*/



/* 문제 3번
#include <stdio.h>

void main()
{
	printf("제 이름은 홍길동 입니다.\n");
	printf("제 나이는 %d 살 입니다.\n",20);
	printf("제가 사는 곳의 번지수는 %d-%d 입니다.\n",123,456);
}
*/



/* 문제 4번
#include <stdio.h>

void main()
{
	printf("%d * %d = %d\n", 4, 5, 4 * 5);
	printf("%d * %d = %d", 7, 9, 7 * 9);
}
*/



#include <stdio.h>

void main()
{
	printf("문자열 출력 : [%-20s]\n", "대한민국");
	printf("문자열 출력 : [%20s]\n", "대한민국");
	printf("문자 출력 : [%10c]\n", 'a');
	printf("오른쪽 정렬 : [%10d]\n", 1234);
	printf("0 삽입 : [%010d]\n", 1234);
	printf("음수의 0 삽입 : [%010d]\n", -1234);
	printf("부동소수점 출력 : [%8.2f]\n", 123.4567);
	printf("부동소수점 출력 : [%-8.2f]\n", 123.4567);
	printf("부동소수점 출력 : [%10.2f]\n", 0.0012345);
	printf("부동소수점 출력 : [%10.3e]\n", 0.0012345);
	printf("부동소수점 출력 : [%10.7g]\n", 0.0012345);
}