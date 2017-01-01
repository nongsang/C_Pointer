#include <stdio.h>

int main(int argc, char* argv[])					// main함수에 인자가 존재
{
	int i = 0;
	printf("문자열의 수 : %d\n", argc);
	
	for (i = 0; i < argc; ++i)
	{
		printf("%d번째 문자열 : %s\n", i, argv[i]);
	}
}
// 3번째 줄
// int argc는 문자열을 저장한다.
// int argv는 문자열의 첫번째 주소를 저장한다.