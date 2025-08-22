#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void shuffle(int list[], int X)
{
	for (int i = 0; i < X; i++)
	{
		int seed = rand() % X;
		int temporary = list[seed];
		list[seed] = list[i];
		list[i] = temporary;
	}
}
void heart(int i)
{
	if (i == 5)
	{
		printf("♥♥♥♥\n");
	}
	else if (i == 4)
	{
		printf("♥♥♥\n");
	}
	else if (i == 3)
	{
		printf("♥♥\n");
	}
	else if (i == 2)
	{
		printf("♥\n");
	}
	else if (i == 1)
	{
		printf("D E F E A T\n");
	}
}

void update_health(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("♥");
	}
	printf("\n");
}
int main()
{
#pragma region rand 함수
	// 0~32767 사이의 난수 값을 반환하는 함수 입니다.

	//UTC기준으로 1970년 1울 1일 0시 0분 0초부터 경과된
	//시간을 초 (sec) 로 반환하는 함수 입니다.
	/*srand(time(NULL));
	int random = rand()%10+1;
	printf("%d\n", random);*/
#pragma endregion

#pragma region Sguffle Function
	srand(time(NULL));
	int list[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(list)/sizeof(list[0]);
	shuffle(list, size);
	for (int i = 0; i < size; i++)
	{
		printf("list[%d] = %d\n ", i, list[i]);
	}
#pragma endregion

#pragma region Game

#pragma region 내가푼거
	//srand(time(NULL));
	//int random = rand() % 50 + 1;
	//int j = 0;
	//printf("UP-DOWN게임 시작합니다 총 5번의 기회가 있습니다.\n");
	//printf("♥♥♥♥♥\n");
	//
	//for (int i = 5; i > 0; i--)
	//{	

	//	scanf_s("%d", &j);
	//	heart(i);
	//	if (random < j)
	//	{
	//		printf("%d는 컴퓨터가 가지고 있는 값보다 작습니다.\n", j);
	//	}
	//	else if (random > j)
	//	{
	//		printf("%d는 컴퓨터가 가지고 있는 값보다 많습니다\n", j);
	//	}
	//	else
	//	{
	//		printf("V I C T O R Y\n");
	//		break;
	//	}
	//}
#pragma endregion

#pragma region 풀이
	srand(time(NULL));
	int computer = rand() % 50 + 1;
	int answer = 0;
	int life = 5;
	while (life > 0)
	{	
		update_health(life);
		printf("COMPUTER : \n");
		scanf_s("%d", &answer);

		if (answer == computer)
		{
			break;
		}
		else if (answer > computer)
		{
			life--;
			printf("answer > computer\n");
		}
		else if (answer < computer)
		{
		life--;
		printf("answer < computer\n");
		}

	}
	if (life <= 0)
	{
		printf("D E F E A T\n");
	}
	else
	{
		printf("V I C T O R Y\n");
	}
#pragma endregion


#pragma endregion

	return 0;
}