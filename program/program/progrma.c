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
#pragma region rand �Լ�
	// 0~32767 ������ ���� ���� ��ȯ�ϴ� �Լ� �Դϴ�.

	//UTC�������� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����
	//�ð��� �� (sec) �� ��ȯ�ϴ� �Լ� �Դϴ�.
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