// 난수 발생기
#include <stdio.h>

extern unsigned random1(void);
extern unsigned ramdom2(void);

extern int MOD;

int main(void)
{
	int a;

	MOD = 10;
	for (a = 0; a < 10; a++)
		printf("%d", random1());
	return 0;
}