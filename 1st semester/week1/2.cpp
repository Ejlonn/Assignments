#include <stdio.h>

int main(){
	
	float num1,num2;
	printf("Buyuk olani bulmak istediginiz iki sayidan ilkini giriniz: ");
	scanf("%f",&num1);
	printf("\nBuyuk olani bulmak istediginiz iki sayidan sonuncuyu giriniz: ");
	scanf("%f",&num2);
	if (num1 > num2)
	{
		printf("\nIlk sayi ikinci sayidan buyuktur.");
	}
	else if(num1 < num2)
	{
		printf("\nIkinci sayi ilk sayidan buyuktur.");
	}
	else
	{
		printf("\nGirdiginiz iki sayi esittir.");
	}

	return 0;
}
