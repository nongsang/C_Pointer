#include <stdio.h>

int main()
{
	const int a = 0, b = 0, c = 0;
	int* ip = NULL;

	ip = &a;
	*ip = 10;
	printf("%d %d %d %d\n", a, b, c, *ip);

	ip = &b;
	*ip = 20;
	printf("%d %d %d %d\n", a, b, c, *ip);

	ip = &c;
	*ip = 30;
	printf("%d %d %d %d\n", a, b, c, *ip);
}
// 8번, 12번, 16번 줄
// 포인터 변수 ip와 변수 a, b, c의 주소를 저장하고 있다.
// 저장한 후에 포인터 변수 ip의 값을 바꾸면 변수 a, b, c의 값 또한 ip의 값으로 바뀌게 된다.
// 일시적인 연결(Link)이 된다.
// 포인터 변수를 통한 변수값의 변경은 변수가 const로 정의가 되어 있어도 값을 변경할 수 있다.