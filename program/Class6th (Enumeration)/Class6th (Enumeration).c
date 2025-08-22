#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

#define WIDTH 10
#define HEIGHT 10
#define SIZE 16
int map[WIDTH][HEIGHT] =
{
    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 1 },
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
    { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 1 },
};

void render()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (map[i][j] == 1)
            {
                printf("■");

            }
            else if (map[i][j] == 0)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

enum COLOR
{
    BLACK,
    DARKBLUE,
    DARKGREEN,
    DARKSKYBLUE,
    DARKRED,
    DARKVIOLET,
    DARKYELLOW,
    GRAY,
    DARKGRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE
};

int main()
{
    // render();

#pragma region 열거형
    //서로 관련있는 상수들을 하나의 집합으로 정의하여 이름으로 
    //사용할 수 있도록 설계된 자료형 입니다.
  /*  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    printf("League of Legend");*/

    const char* colorname[16] =
    {
    "BLACK"       ,
    "DARKBLUE"    ,
    "DARKGREEN"   ,
    "DARKSKYBLUE" ,
    "DARKRED"     ,
    "DARKVIOLET"  ,
    "DARKYELLOW"  ,
    "GRAY"        ,
    "DARKGRAY"    ,
    "BLUE"        ,
    "GREEN"       ,
    "SKYBLUE"     ,
    "RED"         ,
    "VIOLET "     ,
    "YELLOW"      ,
    "WHITE"
    };

    for (int i = 0; i < 16; i++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
        printf("%s\n", colorname[i]);
        if (i % 5 == 0 && i != 0)
        {
            system("pause");
        }
    }

#pragma endregion


    return 0;
}