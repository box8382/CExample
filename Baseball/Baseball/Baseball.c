#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int num; //사용자로부터 입력받을 값
	int a, b, c; // a백의자리 b십의자리 c일의자리 저장값

	int com; // 컴퓨터가 저장할 랜덤값
	int q, w, e; // 컴퓨터가 정한값을 q백의자리 w십의자리 e일의자리로 나눌 저장값

	int s=0, ball=0;// 스트라이크와 볼을 저장할 변수

	int i=1; //게임의 회차의 횟수


	srand(time(NULL)); //랜덤값의 시작 
	com = rand() % 999; //컴퓨터가 가질 3자리의 랜덤값

	while (1) //컴퓨터가 정한값이 중복되는지 비교작업
	{
		q = com / 100; //백의자리 공식
		w = (com / 10) % 10; //십의자리 공식
		e = com % 10; //일의자리 공식
		if (q == w || w == e || q == e)
		{
			continue;
		}
		else
		{
			break;
		}
	}

	//------------------------------------------
	printf("숫자 야구 게임 입니다.\n\n"); //시작 안내매세지 


	while (i<10) //9회차 진행
	{
		while (1)
		{
			printf("[%d회차]\n", i);
			printf("중복되지 않는 숫자를 입력해주세요 : ");
			scanf_s("%d", &num);

			if (num > 1000) // 3자리까지만 입력받기
			{ 
				printf("세자리 까지만 입력해주세요 !!\n"); 
				continue;
			}

			a = num / 100; //백의자리 공식
			b = (num / 10) % 10; //십의자리 공식
			c = num % 10; //일의자리 공식

			if (a == b || b == c || a == c) //중복숫자를 걸러내는작업 
			{
				printf("숫자가 중복입니다 다시입력해주세요!!\n\n");
				continue;
			}


			if (a == q) //컴퓨터와 맞는지 비교작업
				s++;
			if (b == w)
				s++;
			if (c == e)
				s++;

			if (a == w || a == e)
				ball++;
			if (b == q || b == e)
				ball++;
			if (c == q || c == w)
				ball++;
			break;
		}
		if (s < 3)
		{
			printf("[%d]S [%d]B\n\n", s, ball); // 스트라이크 볼의 개수 출력
			s = 0,ball=0;
		}
		else
		{
			printf("[%d]S [%d]B\n\n", s, ball);
			break;
		}		
		i++;
	}
	if (i == 10) printf("GAME OVER ㅠㅠ\n");
	else printf("클리어했습니다 !!\n");
}