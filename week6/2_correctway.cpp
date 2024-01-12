//soruyu yanlis anladigimiz icin ugrasarak tekrar yazdigimiz bol kufur iceren kaynak kodu
//burdan lmsdeki ödevleri a0 turkce ile yukleyenlere selamlar
//kan ter emek uykusuzluk dolu kaynak kodu. Burdan Asrin Tok kardesime selam gonderiyorum


#include <stdio.h>

//#define STUDENT_COUNT 1  // ogrenci sayýsýný belirlediðimiz makro
//#define LECTURE_COUNT 2  // her ogrenci icin ders sayýsýný belirlediðimiz makro

const int STUDENT_COUNT = 1; // Makrolar yerine bildiðimiz yoldan bu þekilde belirlenebilir.
const int LECTURE_COUNT = 1; //  const olarak yapmamýn sebebi diziler dinamik memory kullanmadýgý için sabit deðer almalý


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
	struct lecture lectures[5];
};

double gradeCalculate(struct personInfo person,int index);

int main(){
	
	struct personInfo person[STUDENT_COUNT];
	
	int i,j;
	for(i=0;i<STUDENT_COUNT;i++)
	{
		printf("%d. ogrencinin ismini giriniz: ",i+1);
		scanf("%s",person[i].fname);
		printf("%d. ogrencinin soyismini giriniz: ",i+1);
		scanf("%s",person[i].lname);
		
		for(j=0;j<LECTURE_COUNT;j++)
		{

			printf("%d. ogrencinin %d. ders kodunu giriniz: ",i+1,j+1);
			scanf("%d",&person[i].lectures[j].lecture_code);
			printf("%d. ogrencinin %d kodlu ders icin vize notunu giriniz: ",i+1,person[i].lectures[j].lecture_code);
			scanf("%d",&person[i].lectures[j].midterm);	
			printf("%d. ogrencinin %d kodlu ders icin final notunu giriniz: ",i+1,person[i].lectures[j].lecture_code);
			scanf("%d",&person[i].lectures[j].final);
			printf("%d. ogrencinin %d kodlu ders icin gecme notunu giriniz: ",i+1,person[i].lectures[j].lecture_code);
			scanf("%lf",&person[i].lectures[j].passGrade);

		}		 
	}
	
	for(i=0;i<STUDENT_COUNT;i++)
	{
		printf("\n%d. ogrencinin adi: %s",i+1,person[i].fname);
		printf("\n%d. ogrencinin soyadi: %s\n",i+1,person[i].lname);
		
		for(j=0;j<LECTURE_COUNT;j++)
		{
			double grade = gradeCalculate(person[i],j);
			printf("\n%d. ogrencinin %d kodlu ders icin vize notu: %d",i+1,person[i].lectures[j].lecture_code,person[i].lectures[j].midterm);
			printf("\n%d. ogrencinin %d kodlu ders icin final notu: %d",i+1,person[i].lectures[j].lecture_code,person[i].lectures[j].final);
			printf("\n\n%d kodlu ders icin gecme notu: %.2lf",person[i].lectures[j].lecture_code,person[i].lectures[j].passGrade);
			printf("\n%d kodlu ders icin ogrencinin notu: %.2lf\n",person[i].lectures[j].lecture_code,grade);
			
			
			if(grade < person[i].lectures[j].passGrade)
			{
				printf("\nOgrenci %d kodlu dersten kalmistir.",person[i].lectures[j].lecture_code);
			}
			else
			{
				printf("\nOgrenci %d kodlu dersten gecmistir.",person[i].lectures[j].lecture_code);
			}
		}
		
	}	
	
	return 0;
}

double gradeCalculate(struct personInfo person,int index){
		
	return (person.lectures[index].midterm * 0.4) + (person.lectures[index].final * 0.6); 

}







