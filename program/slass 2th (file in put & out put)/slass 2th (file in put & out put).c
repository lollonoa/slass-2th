#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define SIZE 100001

void load(const char* filename) // 파일 이미지 불러오는 함수
{
	FILE* file = fopen(filename, "r");
	char buffer[SIZE] = { 0, };

	fread(buffer, 1, SIZE, file);
	printf("%s", buffer);
	fclose(file);
}

int main()
{
#pragma region 파일 입출력
#pragma region file write
	// fopne (첫 번째 매개 변수) : 파일의 이름
	// fopen(두 번째 매개 변수) : 입력&출력 모드

	// "r" : 읽기 전용 (파일이 없을 때 : NULL)
	// "w" : 쓰기 전용(새로 파일을 생성) 기존데이터를 덮어씌움
	// "a" : 추가 모드(새로 파일을 생성) 기존에 있는 파일에 내용을 추가

	/*FILE *file = fopen("data.txt", "w");
	fputs("strength : \n", file);
	fputs("dexterity : \n", file);
	fputs("wisdom : \n", file);
	fputs("intelligence : \n", file);
	fputs("constitution : \n", file);

	fclose(file);*/
#pragma endregion

#pragma region file Read
	//FILE *file = fopen("pocketmon.txt", "r");
	//
	//char buffer[SIZE] = { 0, };

	// 1. buffer : 읽은 데이터를 저장할 메모리
	// 2. element size : 각 데이터 항목의 크기
	// 3. element count : 데이터를 읽어올 데이터 항목의 수
	// 4. stream : 데이터를 읽어올 파일 포인터

	//fread(buffer, 1, SIZE, file);
	//printf("%s", buffer);
	//fclose(file);

	load("pocketmon.txt");
#pragma endregion

#pragma endregion


	return 0;
}