//Programming part Q 02
#define _CRT_NO_SECURE_WARNINGS

#include<stdio.h>
#include<stdlib.h>

void get_dice_face();

static int a1 = 0;
static int a2 = 0;
static int a3 = 0;
static int a4 = 0;
static int a5 = 0;
static int a6 = 0;
static int acount = 0;

void get_dice_face() {

	int num = rand() % 6 + 1;

	if (num == 1)
		a1++;

	else if (num == 2)
		a2++;

	else if (num == 3)
		a3++;

	else if (num == 4)
		a4++;

	else if (num == 5)
		a5++;

	else if (num == 6)
		a6++;

}



int main() {

	int b;
	for (b = 0; b < 100; b++)
		get_dice_face();


	printf("1 -> %d\n", a1);

	printf("2 -> %d\n", a2);

	printf("3 -> %d\n", a3);

	printf("4 -> %d\n", a4);

	printf("5 -> %d\n", a5);

	printf("6 -> %d\n", a6);



	return 0;
}

