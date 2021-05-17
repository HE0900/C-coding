//Programming part Q 04

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random() {

	static int inited = 0;

	if (inited == 0) {

		srand((unsigned int)time(NULL));
		inited = 1;

	}

	return rand();



}
int main()
{
	int i;
	for (i = 0; i < 5; ++i)
		printf("%d\n", get_random());

	return 0;
}