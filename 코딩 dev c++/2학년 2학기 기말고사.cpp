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
	printf("���� : %s\n", a.title);
	
	printf("������ : %s\n", a.receive);
	
	printf("�߽��� : %s\n", a.send);
	
	printf("���� : %s\n", a.note);
	
	printf("��¥ : %s\n", a.day);
	
	printf("�켱���� : %d\n", a.important);
}

int main(){
	
	struct email a;
	
	strcpy(a.title, "�ȳ��Ͻʴϱ�");
	
	strcpy(a.receive, "star1234@gmail.com");
	
	strcpy(a.send, "severbad@gmail.com");
	
	strcpy(a.note, "20191422 �������Դϴ�. C��� ��հ� �����Ͽ����ϴ�.");
	
	strcpy(a.day, "2020/12/01");
	
	a.important = 0;
	
	print(a);
	
	return 0;
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
