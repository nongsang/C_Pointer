#include <stdio.h>

int main()
{
	char* ch = NULL;
	int* integer = NULL;
	double* real = NULL;

	printf("ch, integer, real\n");
	printf("%2d %7d %6d\n", ch, integer, real);
	printf("\n");

	/*printf("*ch, *integer, *real\n");
	printf("%3d %8d %7d\n", *ch, *integer, *real);
	printf("\n");*/

	printf("&ch,     &integer,&real\n");
	printf("%3d %8d %7d\n", &ch, &integer, &real);
	printf("\n");

	printf("sizeof(ch), sizeof(integer), sizeof(real)\n");
	printf("%10d %16d %13d\n", sizeof(ch), sizeof(integer), sizeof(real));
	printf("\n");

	printf("sizeof(*ch), sizeof(*integer), sizeof(*real)\n");
	printf("%11d %17d %14d\n", sizeof(*ch), sizeof(*integer), sizeof(*real));
	printf("\n");

	printf("sizeof(&ch), sizeof(&integer), sizeof(&real)\n");
	printf("%11d %17d %14d\n", sizeof(&ch), sizeof(&integer), sizeof(&real));
	printf("\n");
}
// 9 ~ 11번째 줄
// 각 포인터 변수들을 NULL로 초기화 하였다.
// 포인터 변수들이 가리키는 주소가 없으므로 0이 출력

// 13 ~ 15번째 줄
// 각 변수들을 NULL로 초기화 하였다.
// 그러므로 각 변수의 값은 아무것도 가지고 있지 않으므로 *를 이용하여 값을 호출하면 오류가 난다.
// C언어에서는 NULL이 표준이지만 C++ 에서는 nullptr이 표준이므로 참고하도록
// 포인터로 정의한 변수를 초기화 하지 않고 호출을 하면 매우 큰일나니 주의
// 그러므로 처음에 포인터를 NULL 혹은 nullptr로 정의를 하고 시작할 것

// 17 ~ 19번째 줄
// 각 포인터 변수의 주소를 10진수로 출력한다

// 21 ~ 23번째 줄
// 포인터 변수가 가리키는 주소의 메모리 크기를 물어보고 있다.

// 25 ~ 27번째 줄
// *를 사용하여 각 포인터 변수들의 실제 메모리 공간의 크기를 구할 수 있다.

// 29 ~ 31번째 줄
// 각 포인터 변수가 저장된 주소값을 담는 공간도 4byte로 통일한다.

// 퍼포먼스를 위해서는 포인터를 잘 쓰는게 좋으니까 잘 배우도록