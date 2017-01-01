#include <stdio.h>

int main()
{
	char c = 'd';
	double d = 3.1;

	void* vp = NULL;

	vp = &c;

	printf("vp : %d\n", vp);
	//printf("*vp : %d", *vp);				// 에러
	printf("*vp : %c\n", *(char*)vp);		// 에러를 없애기 위한 형변환

	*(char*)vp = 54;						// 값의 변경, 정수를 저장하여 %c로 출력하면 ASCII로 인식하여 문자를 출력한다.
	printf("*vp : %c\n", *(char*)vp);

	printf("\n");

	vp = &d;

	printf("vp : %d\n", vp);
	//printf("*vp : %d", *vp);				// 에러
	printf("*vp : %f\n", *(double*)vp);		// 에러를 없애기 위한 형변환

	*(double*)vp = 5.2;						// 값의 변경
	printf("*vp : %f\n", *(double*)vp);

}
// 13, 24번째 줄
// vp를 void형 포인터로 선언을 하였기 때문에 주소값만 받을 수 있다.
// void형 포인터는 모든 변수의 주소값을 받을 수 있다.
// 따라서 *를 사용하여 값을 출력하는 것은 불가능 하다.

// 14, 25번째 줄
// void형 포인터를 강제로 형변환하여 출력하였다.
// 형변환 하면 에러를 없앨 수 있다.

// 16, 27번째 줄
// 값을 변경할 때 꼭 갖제 변환을 해줘야 한다.