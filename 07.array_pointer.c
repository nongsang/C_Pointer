#include <stdio.h>

int main()
{
	int arr[3] = { 10, 20, 30 };

	printf("arr : %d\n", arr);
	printf("&arr : %d\n", &arr);
	printf("*arr : %d\n", *arr);
}
// arr만 호출하면 배열의 처음 메모리 주소를 반환한다.
// arr를 불렀을때와 &arr를 불렀을떄 같은 값이 나온다.
// *arr는 arr가 배열의 처음 메모리 부분을 가리키므로 배열의 첫벗째인 10이 나온다.