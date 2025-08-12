#include <stdio.h>
#include <stdlib.h>
#include<time.h>
void shuffle(int list [], int X)
{
	for (int i = X - 1; i < X; i--)
	{
		int seed = rand() % X;
		int temporary = list[seed];
		list[seed] = list[i];
		list[i] = temporary;
	}
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



	return 0;
}