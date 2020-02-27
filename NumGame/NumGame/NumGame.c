#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	printf("숫자맞추기 게임\n\n");

	int com; // 컴퓨터가 가지고 있는 임의의 값[정답값]
	int user; // 사용자가 키보드롤 입력한 값 변수

	//rand의 값이 다르게 만들어 지려면
	//랜덤값 만들기를 시작한다라는 초기화 작업이 필요함
	srand(time(NULL));

	//컴퓨터가 만들 임의의 숫자
	com = rand()%21; // 0부터 20중에 임의의 수

	while(1)
	{
		printf("0~20 사이의 정수 입력 : ");
		scanf_s("%d", &user);

		if (user > com)
		{
			printf("%d보다 작은 값 입니다.\n\n", user);
		}
		else if (user < com)
		{
			printf("%d 보다 큰 값 입니다.\n\n", user);
		}
		else
		{
			printf("축하합니다\n정답입니당\n\n");
			break;
		}
	}
	printf("프로그램이 종료되었습니다.\n");
}