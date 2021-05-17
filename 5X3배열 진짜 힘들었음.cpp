#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define h 3
#define w 5

int main(void){ 
  int n1, n2, a = 0, rnd; 
  int num_m[99];
  int num[h][w]; 
	int count = 0;
  srand((unsigned int)time(NULL)); //시간 값
  
  /* 시간 활용 랜덤문 */
  	for (n1 = 0; n1 < 100;){ 
    	rnd = rand() % 100; 
    	for (n2 = 0; n2 < n1; n2++) { 
        	if (num_m[n2] == rnd) { 
          		break; 
        	} 
      	} 
    	if (n1 == n2){ 
        	num_m[n1++] = rnd; 
    	} 
  	} 

  /*열행렬 3*5 */

  for (n1 = 0; n1 < h; n1++){ //n1을 0부터 2까지 증가시킨다.
  
    for (n2 = 0; n2 < w; n2++) {// n2를 0부터 3까지 증가시킨다.
     
      num[n1][n2] = num_m[a++]; //num[n1][n2]는 num_m[a를 증가시킨 값]과 같다.
		  //printf("[%d][%d]:[%d]\n",n1,n2,num[n1][n2]); //검증문
    } //위 문장을 반복
  } //위 문장을 계속 반복
  
  int sort_num[h*w]; // sort num [15]함수 추가 

  for (int step = 0; step < h; step++) {  //step = 0추가, step을 0부터 2까지 증가시킨다.
	  for (int i=0; i< w ; i++) {           // i = 0 추가, i를 0부터 4까지 증가시킨다.
		  sort_num[step*5 + i] = num[step][i];  // sort_num [step값 * 5 + 1] 한 값은 num[step][i] 한 값과 같다.
			//printf("[%d] : %02d\n",step*5 + i, sort_num[step*5 + i]);  //점검문장
		} // 위 조건을 만족시킬 때까지 반복한다.

	} //위 조건을 만족시킬 때까지 반복한다.

  /* sort */
	int temp;
  for (int step = 0; step < (h * w); step++) {  //step = 0으로 할당, step을 0부터 14까지가 증가시킨다.
	  for (int i = 0; i < (h * w) - 1 - step; i++) { // i = 0 할당, i을 0부터 15-1-step 전까지 증가시킨다
		  if (sort_num[i] > sort_num[i+1]) {  //만약 sort_num[i]이 sort_num[i+1]보다 클 경우
				temp = sort_num[i];   //temp는 sort_num[i]값과 같다.
				sort_num[i] = sort_num[i+1];  // 또한 sort_num[i]는 sort_num [i+1]과 같다.
				sort_num[i+1] = temp; // 또한 sort_num[i+1]은 temp와 같다.
			}
		} //위 조건을 만족시킬 떄까지 반복한다.
	} //위 조건을 만족시킬 때까지 반복한다.

	printf("** 결과\n");
	for (int step = 0,i = 0,j = 0; step < (h * w); step++,j++) { // step = 0, i = 0, j = 0을 할당, step은 0부터 14까지 증가시킨다. j를 0부터 증가시킨다.
		//printf("[%d][%d][%d]:[%d]\n",i,j,step,sort_num[step]); // 검토문
	num[i][j] = sort_num[step]; // num[i][j]는 sort_num[step]과 같다.
    if ( (step+1) % 5 == 0) { //만약 step+1을 5로 나눈 나머지가 0이면 
			i++; j = 0; // i는 증가시키고 j는 0이다.
		}
	} // 위 조건을 만족시킬 때까지 반복한다.

  /* 결과 */
  for (n1 = 0; n1 < h; n1++){ // n1을 0에서부터 2까지 증가시킨다.
   
    for (n2 = 0; n2 < w; n2++){ // n2를 0에서부터 4까지 증가시킨다.
		printf("%02d ",num[n1][n2]); //num[n1][n2]값을 출력
    	count++; // count를 증가시킨다.
	} // 위문장을 반복
	if (count == 5){ //만약 count가 5와 일치하면 	
	printf("\n"); // 한칸을 띄운다.
	}
		
	
		count = 0; //count 초기화.
  } //위 문장을 반복
  return 0; 
}

