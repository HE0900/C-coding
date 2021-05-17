#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define h 3
#define w 5

int main(void)
{
	int n1, n2, a = 0, rnd;
	int num_m[99];
	int num[h][w];
	int count = 0;
	srand((unsigned int)time(NULL));

	/* 랜덤 */
	for (n1 = 0; n1 < 100;)
	{
		rnd = rand() % 100;
		for (n2 = 0; n2 < n1; n2++)
		{
			if (num_m[n2] == rnd)
			{
				break;
			}
		}
		if (n1 == n2)
		{
			num_m[n1++] = rnd;
		}
	}

	/*열행렬 3*5 */

	for (n1 = 0; n1 < h; n1++)
	{
		for (n2 = 0; n2 < w; n2++)
		{
			num[n1][n2] = num_m[a++];
			//printf("[%d][%d]:[%d]\n",n1,n2,num[n1][n2]);
		}
	}

	int sort_num[h * w];

	for (int step = 0; step < h; step++) {
		for (int i = 0; i < w; i++) {
			sort_num[step * 5 + i] = num[step][i];
			//printf("[%d] : %02d\n",step*5 + i, sort_num[step*5 + i]);
		}

	}

	/* sort */
	int temp;
	for (int step = 0; step < (h * w); step++) {
		for (int i = 0; i < (h * w) - 1 - step; i++) {
			if (sort_num[i] > sort_num[i + 1]) {
				temp = sort_num[i];
				sort_num[i] = sort_num[i + 1];
				sort_num[i + 1] = temp;
			}
		}
	}

	printf("-----결과-----\n");
	for (int step = 0, i = 0, j = 0; step < (h * w); step++, j++) {
		//printf("[%d][%d][%d]:[%d]\n",i,j,step,sort_num[step]);
		num[i][j] = sort_num[step];
		if ((step + 1) % 5 == 0) {
			i++; j = 0;
		}
	}

	/* 결과 */
	for (n1 = 0; n1 < h; n1++)
	{
		for (n2 = 0; n2 < w; n2++)
		{
			printf("%02d ", num[n1][n2]);
			count++;
		}
		if (count == 5)
		{
			printf("\n");

		}
		count = 0;
	}
	return 0;
}

