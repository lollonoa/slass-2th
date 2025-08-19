#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#define SIZE 10
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void mave(int x, int y)
{
	// x와 y축을 설정하는 구조체 입니다
	COORD position = { x,y };
	//콘솔 커서의 좌표를 설정하는 함수 입니다.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char x = 0;
	while (1)
	{
		x = _getch();

		switch (x)
		{
		case LEFT:printf("LEFT\n");
		}
		switch (x)
		{
		case RIGHT : printf("RIGHT\n");
		}
		switch (x)
		{
		case UP : printf("UP\n");
		}
		switch (x)
		{
		case  DOWN : printf("DOWN\n");
		}
	}
	
#pragma region 연습


#pragma endregion

	return 0;
}