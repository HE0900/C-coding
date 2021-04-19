/*휴먼IT융합학부 로봇공학전공 20191422 정준혁*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()

{
	int f, c;

	printf("변환할 화씨를 입력하세요:");
	scanf("%d", &f);

	c = (f - 32) * 5 / 9;

	printf(" %d ℉는 %d ℃ 입니다. \n", f, c);

	return 0;
}