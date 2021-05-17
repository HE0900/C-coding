// 휴먼IT융합학부 로봇융합전공 20191422 정준혁 중간고사 대체 과제 8번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pie 3.141592
int main()
{
	double r, p, c;
	printf("구의 반지름을 입력하시오:");
	scanf("%lf", &r);

	p = 4 * pie * r*r;
	c = r * r * r * 4 / 3 * pie;

	printf("표면적은 %lf입니다. \n체적은 %lf 입니다.", p, c);

	return 0;
}