#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("숫자를 입력하세요\n");
	scanf("%d", &num);

	
	if (num % 2 == 0 && num != 0)
	{
		printf("%d는 짝수입니다.", num);
	}
	else if (num % 2 == 1)
	{
		printf("%d는 홀수입니다.", num);
	}
	else if (num == 0)
		printf("0은 어느쪽에도 속하지 않습니다.");

	return 0;
			

}