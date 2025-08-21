#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

#define SIZE 10
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int screen_index;

HANDLE screen[2];

void initialize()
{
	CONSOLE_CURSOR_INFO cursor;
	//화면 버퍼를 2개 생성합니다
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, 0, NULL,
		CONSOLE_TEXTMODE_BUFFER, NULL
	);
	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, 0, NULL,
		CONSOLE_TEXTMODE_BUFFER, NULL
	);

	cursor.dwSize = 1;
	cursor.bVisible = FALSE;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}

void flip()
{
	SetConsoleActiveScreenBuffer(screen[screen_index]);

	screen_index = !screen_index;
}

void clear()
{
	COORD position = { 0, 0 };

	DWORD dword;

	CONSOLE_SCREEN_BUFFER_INFO console;

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(handle, &console);

	//화면 가로새로 최대값 설정.
	int width = console.srWindow.Right - console.srWindow.Left + 1;
	int height = console.srWindow.Bottom - console.srWindow.Top + 1;

	//화면전체를 공백으로 채우는 명령어
	FillConsoleOutputCharacter(screen[screen_index], ' ', width * height, position, &dword);
}

void release()
{
	CloseHandle(screen[0]);
	CloseHandle(screen[1]);
}

void render(int x, int y, const char* text)
{
	DWORD dword;
	COORD position = { x,y };

	SetConsoleCursorPosition(screen[screen_index], position);
	WriteFile(screen[screen_index], text, strlen(text), &dword, NULL);

}

int main()
{
	int x = 0;
	int y = 0;
	char z = 0;
	initialize();

	while (1)
	{
		if (GetAsyncKeyState(VK_UP) & 0x0001)
		{
			y--;
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x0001)
		{
			x -= 2;
		}if (GetAsyncKeyState(VK_RIGHT) & 0x0001)
		{
			x += 2;
		}if (GetAsyncKeyState(VK_DOWN) & 0x0001)
		{
			y++;
		}
		flip();

		clear();

		render(x, y, "★");
	}


	release();

	return 0;
}