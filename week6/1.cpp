#include <stdio.h>

struct worker{
	char fname[30];
	char lname[20];
	int age;
	double salary;
};

void printWorkerInfo(struct worker worker);

int main(){
	
	struct worker worker;
	printf("Iscinin adini giriniz: ");
	fgets(worker.fname,sizeof(worker.fname),stdin);
	printf("Iscinin soyadini giriniz: ");
	fgets(worker.lname,sizeof(worker.lname),stdin);
	printf("Iscinin yasini giriniz: ");
	scanf("%d",&worker.age);
	printf("Iscinin aylik maasini giriniz: ");
	scanf("%lf",&worker.salary);
	
	printWorkerInfo(worker);
	

	return 0;
}

void printWorkerInfo(struct worker worker){

	printf("\nIscinin ismi: %s",(worker.fname));
	printf("Iscinin soyismi: %s",(worker.lname));
	printf("\nIscinin yasi: %d",(worker.age));
	printf("\nIscinin maasi: %.2lf",(worker.salary));
}


