#include <stdio.h>

int main(){
	
		float num1,num2;
		
		printf("Aritmetik islemleri yapilmasini istediginiz ilk sayiyi giriniz:");
		scanf("%f",&num1);
		
		printf("\nIkinci sayiyi giriniz: ");
		scanf("%f",&num2);

		if(num2 == 0)
		{
			printf("\nBir sayiyi 0 ile bolemezsiniz!");
		}
		else
		{			
		printf("\nIki sayinin toplami %.2lf'dir",num1+num2);
		printf("\nIki sayinin farki %.2lf'dir",num1-num2);
		printf("\nIki sayinin carpimi %.2lf'dir",num1*num2);
		printf("\nIki sayinin bolumu %.2lf' dir",num1/num2);		
		}
		
	return 0;
}
