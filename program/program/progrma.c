#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define SIZE 10


int main()
{
#pragma region getasynckeystate
	//windows API���� �����ϴ� �Է� ó�� �Լ���, ������ Ű�� ���¸�
	//�������� Ȯ���� �� ���Ǵ� �Լ��Դϴ�.

	// Key Syaye
	// 0x0000 : ������ ���� ���� ����, ȣ�� �������� �������� ���� ����
	// 0x0001 : ������ ���� ���� �ְ�, ȣ�� �������� �������� ���� ����
	// 0x8000 : ������ ���� ���� ����, ȣ�� �������� �����ִ� ����
	// 0x8001 : ������ ���� ���� �ְ�, ȣ�� �������� �����ִ� ����

	//SHORT GetasyncKeystate(int key)
	//VK_RETURN, VK_LEFT

	const char* conan[SIZE];
	conan[0] = "�ȳ��ϼ��� Ž����";
	conan[1] = "�ȳ��ϼ��� �� �̸��� �ڳ� Ž������";
	conan[2] = "�ٵ� �̷��� ���°� �³���?";
	conan[3] = "�ڵ尡 �������� ��� ���µ�";
	conan[4] = "��¶�� �̹� �Ƿڴ� ������� ���λ�� �Դϴ�.";
	conan[5] = "�� �˰��־����";
	conan[6] = "?";
	conan[7] = "�Ƹ�� ������ ���ŵ��";
	conan[8] = "���̵�� �������ϴ�.";
	conan[9] = "����ϼ̽��ϴ�.";
	for (int i = 0; i < SIZE; i++)
	{
		printf("%s\n", conan[i]);
	}
#pragma endregion


	return 0;
}