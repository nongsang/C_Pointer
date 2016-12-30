#include <stdio.h>

int main()
{
	char c = 'A';
	char* cp = NULL;
	char** cpp = NULL;

	cp = &c;
	cpp = &cp;

	printf("c, cp, cpp\n");
	printf("%c, %2c, %4c\n", c, cp, cpp);
	printf("%d, %d, %d\n", c, cp, cpp);

	printf("\n");

	printf("c, *cp, *cpp\n");
	printf("%c, %3c, %4c\n", c, *cp, *cpp);
	printf("%d, %d, %d\n", c, *cp, *cpp);

	printf("\n");

	printf("c, *cp, **cpp\n");
	printf("%c, %3c, %5c\n", c, *cp, **cpp);
	printf("%d, %d, %d\n", c, *cp, **cpp);
}
// 12 ~ 14번째 줄
// 변수 c의 경우 가진 값은 A이기 때문에 c를 부르면 A가 출력
// 하지만 cp를 부르면 그 값은 c의 주소값을 가리키기 때문에 이상한 문자가 출력된다.
// cpp도 cp의 주소값을 가지므로 마찬가지

// 18 ~ 20번째 줄
// cp의 경우 *를 붙여서 역참조(dereferencing)하였으므로 c의 주소 안의 값을 출력한다.
// cpp의 경우 *를 붙였지만 역참조를 한번만 했으므로 cp의 주소 안의 값, 즉 c의 주소값을 출력하게 된다.

// 24 ~ 26번째 줄
// cpp의 경우 **를 사용하여 cp의 주소 안의 값(c의 주소값)에서 다시 역참조하여 c의 주소값 안의 값, 즉 c가 가진 값을 출력하고 있다.