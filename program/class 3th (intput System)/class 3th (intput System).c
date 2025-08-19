#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
#define SIZE 10


int main()
{
#pragma region getasynckeystate
	//windows API에서 제공하는 입력 처리 함수로, 지정된 키의 상태를
	//비동적으로 확인할 때 사용되는 함수입니다.

	// Key Syaye
	// 0x0000 : 이전에 누른 적이 없고, 호출 시점에도 눌려있지 않은 상태
	// 0x0001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있지 않은 상태
	// 0x8000 : 이전에 누른 적이 없고, 호출 시점에는 눌려있는 상태
	// 0x8001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있는 상태

	//SHORT GetasyncKeystate(int key)
	//VK_RETURN, VK_LEFT


	const char* conan[SIZE];
	conan[0] = "안녕하세요 탐정님";
	conan[1] = "안녕하세요 제 이름은 코난 탐정이죠";
	conan[2] = "근데 이렇게 쓰는거 맞나요?";
	conan[3] = "코드가 구구절절 길어 지는데";
	conan[4] = "어쨋든 이번 의뢰는 가면산장 살인사건 입니다.";
	conan[5] = "네 알고있었어요";
	conan[6] = "?";
	conan[7] = "아몬드 냄새가 났거든요";
	conan[8] = "아이디어 고갈났습니다.";
	conan[9] = "고생하셨습니다.";

	int i = 0;
	while (i < SIZE)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			if (i % 2 == 0)
			{
				printf("탐정 : %s\n", conan[i]);
			}
			else
			{
				printf("의뢰인 : %s\n", conan[i]);
			}
			i++;
		}
	}
	printf("대화가 종료되었습니다.\n");
#pragma endregion


	return 0;
}