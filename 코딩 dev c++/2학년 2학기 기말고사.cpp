#include <stdio.h>
#include <string.h>


struct email{
	char title [60];
	char receive[50];
	char send[256];
	char note [1500];
	char day[20];
	int important;

};

print(struct email a){
	printf("제목 : %s\n", a.title);
	
	printf("수신자 : %s\n", a.receive);
	
	printf("발신자 : %s\n", a.send);
	
	printf("내용 : %s\n", a.note);
	
	printf("날짜 : %s\n", a.day);
	
	printf("우선순위 : %d\n", a.important);
}

int main(){
	
	struct email a;
	
	strcpy(a.title, "안녕하십니까");
	
	strcpy(a.receive, "star1234@gmail.com");
	
	strcpy(a.send, "severbad@gmail.com");
	
	strcpy(a.note, "20191422 정준혁입니다. C언어 재밌게 수강하였습니다.");
	
	strcpy(a.day, "2020/12/01");
	
	a.important = 0;
	
	print(a);
	
	return 0;
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
