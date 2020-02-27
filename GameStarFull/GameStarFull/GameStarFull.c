#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define up 72
#define down 80
#define left 75
#define right 77
// 함수의 프로토타입   
void drawMap();
void keyprocess();
int check();


// 전역 변수
char map[10][10] = {
{1,1,1,1,1,1,1,1,1,1},
{1,2,1,0,0,0,0,0,0,1},
{1,0,1,0,0,0,1,0,0,1},
{1,0,1,0,0,0,1,0,0,1},
{1,0,0,0,1,1,1,0,0,1},
{1,1,1,1,1,0,0,0,1,1},
{1,0,0,0,1,0,0,0,1,1},
{1,0,0,0,1,0,0,0,0,1},
{1,0,0,0,0,0,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1}
};

int posY = 1;
int posX = 1;


void main()
{
	// 맵 그리기 
	while (1)
	{
		system("cls");

		//화면에 맵그리기
		drawMap();

		//게임이 종료되었는지 검사
		if (check()) break;

		//방향키 입력받아서 map배열에 값 변경
		keyprocess();
	}
	printf("게임끝!");
}



int check()
{
	int x, y;
	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (map[y][x] == 0) return 0;
		}
	}

	return 1;
}


// 화면에 맵을 그리는 합수
void drawMap()
{

	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			switch (map[y][x])
			{
			case 0:
				printf("　");
				break;
			case 1:
				printf("□");
				break;
			case 2:
				printf("■");
				break;
			}
		}
		printf("\n");
	}
}


//키보드 입력받는 함수 
void keyprocess()
{
	int key;
	key = _getch();
	if (key == 224) key = _getch();

	switch (key) //방향키
	{
	case up: //위에 이동 
		if (map[posY - 1][posX] != 0)return;
		posY--;
		map[posY][posX] = 2;
		break;
	case down: //아래 이동 
		if (map[posY + 1][posX] != 0)return;
		posY++;
		map[posY][posX] = 2;
		break;

	case left: //왼쪽 이동
		if (map[posY][posX - 1] != 0)return;
		posX--;
		map[posY][posX] = 2;
		break;
	case right: //오른쪽 이동 
		if (map[posY][posX + 1] != 0)return;
		posX++;
		map[posY][posX] = 2;
		break;
	}
}