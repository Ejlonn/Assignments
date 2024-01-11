#include <stdio.h>

//#define LECTURE_COUNT 2
const int LECTURE_COUNT = 2; // ders sayýsýný takip ettiðimiz global sabit. Test kolaylýðý için 2 olarak ayarlandý istendiði gibi deðiþtirilebilir
							 // define kullanarak da tanýmlanabilirdi. Bilmediðimizi varsayýp kullanmadým

struct lecture{
	int lecture_code;
	int midterm;
	int final;
	double passGrade;
};

struct personInfo{
	char fname[40];
	char lname[40];
	int no;
	struct lecture lectures[LECTURE_COUNT];
};

int gradeCalculate(struct personInfo person,int index);


int main(){
	
	struct personInfo person;
	
	printf("Ogrencinin ismini giriniz: ");
	fgets(person.fname,sizeof(person.fname),stdin);
	
	printf("Ogrencinin soyismini giriniz: ");
	fgets(person.lname,sizeof(person.lname),stdin);
	
	int i;
	printf("Ogrencinin %d adet ders kodu ve vize,final notlarini giriniz:\n",LECTURE_COUNT);
	for(i=0; i<LECTURE_COUNT; i++)
	{
		printf("\n%d.Ders kodunu giriniz: ",i+1);
		scanf("%d",&person.lectures[i].lecture_code);
		printf("Vize Notu giriniz: ");
		scanf("%d",&person.lectures[i].midterm);
		printf("Final Notu giriniz: ");
		scanf("%d",&person.lectures[i].final);
		printf("Gecme notu giriniz: ");
		scanf("%lf",&person.lectures[i].passGrade);
	}
	
	printf("\nOgrencinin ismi: %s",person.fname);
	printf("Ogrencinin soyismi: %s",person.lname);
	printf("\nOgrencinin notlari: ");
	
	for(i=0; i<LECTURE_COUNT; i++)
	{
		double grade = gradeCalculate(person,i);
		printf("\n\nOgrencinin %d no'lu ders notu: %.2lf",i+1,grade);
		printf("\n%d no'lu ders icin gecme notu: %.2lf",i+1,person.lectures[i].passGrade);
		if(grade < person.lectures[i].passGrade)
		{
			printf("\nOgrenci %d no'lu dersten kalmistir.",person.lectures[i].lecture_code);
		}
		else
		{
			printf("\nOgrenci %d no'lu dersten gecmistir.",person.lectures[i].lecture_code);
		}
	}
	
	
	return 0;
}

int gradeCalculate(struct personInfo person,int index){
	
	double grade = (person.lectures[index].midterm * 0.4) + (person.lectures[index].final * 0.6);
	return grade;
}
