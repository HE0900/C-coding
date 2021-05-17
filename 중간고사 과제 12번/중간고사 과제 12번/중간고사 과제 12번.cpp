// 휴먼IT융합학부 로봇융합전공 20191422 정준혁 중간고사 대체 과제 12번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
		unsigned int x;
		char a, b, c, d;

		printf("첫 번째 문자를 입력하시오: ");
		scanf(" %c", &a);

		printf("두 번째 문자를 입력하시오: ");
		scanf(" %c", &b);

		printf("세 번째 문자를 입력하시오: ");
		scanf(" %c", &c);

		printf("네 번째 문자를 입력하시오: ");
		scanf(" %c", &d);

		x = a | (b << 8) | (c << 16) | (d << 24);

		printf("결과값: %x\n", x);

		return 0;

}