#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define SIZE 1000

int main()
{
#pragma region ���� �����
#pragma region file write
	//fopne (ù ��° �Ű� ����) : ������ �̸�
	// fopen(�� ��° �Ű� ����) : �Է�&��� ���

	// "r" : �б� ���� (������ ���� �� : NULL)
	// "w" : ���� ����(���� ������ ����) ���������͸� �����
	// "a" : �߰� ���(���� ������ ����) ������ �ִ� ���Ͽ� ������ �߰�

	/*FILE *file = fopen("data.twt", "w");
	fputs("strength : \n", file);
	fputs("dexterity : \n", file);
	fputs("wisdom : \n", file);
	fputs("intelligence : \n", file);
	fputs("constitution : \n", file);

	fclose(file);*/
#pragma endregion

#pragma region file Read
	FILE *file = fopen("data.twt", "r");
	
	char buffer[SIZE] = { 0, };
	
	// 1.buffer : ���� �����͸� ������ �޸�
	// 2. element size : �� ������ �׸��� ũ��
	// 3. element count : �����͸� �о�� ������ �׸��� ��
	// 4. stream : �����͸� �о�� ���� ������
	
	fread(buffer, 1, SIZE, file);
	printf("%s", buffer);
	fclose(file);
#pragma endregion

#pragma endregion


	return 0;
}