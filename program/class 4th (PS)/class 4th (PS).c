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

	char z = 0;
	int x = 0;
	int y = 0;
	while (1)
	{

		system("cls");
		mave(x, y);
		printf("★");
		z = _getch();
		if (z == -32)
		{
			z = _getch();
		}
		switch (z)
		{
		case LEFT: if (x > 0) --x, --x;
			break;
		case RIGHT: ++x, ++x;
			break;
		case UP: if (y > 0)--y;
			break;
		case  DOWN: ++y;
			break;
		default: printf("exception");
			break;
		}
		printf("\n");
	}




	return 0;
}