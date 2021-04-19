// 휴먼IT융합학부 로봇융합전공 20191422 정준혁 중간고사 대체 과제 4번
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ft, tall;
	double in;
	printf("키를 입력하시오(cm):");
	scanf("%d", &tall);
	in = tall / 2.54;
	ft  = in/12;
	printf("%dcm는 %d피트이고 %lf인치입니다.", tall, ft, in);

	return 0;
}