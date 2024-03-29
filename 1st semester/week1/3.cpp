#include <stdio.h>

int main(){
	
	float num1,num2,num3;
	float Avg;
	
	printf("Ortalamasini bulmak istediginiz 3 sayiyi giriniz: ");
	scanf("%f %f %f",&num1,&num2,&num3);
	Avg = (num1 + num2 + num3) / 3.0;
	printf("Girdiginiz sayilarin ortalamasi : %.2f ",Avg);
	
	return 0;
}
