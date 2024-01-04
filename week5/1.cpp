#include <stdio.h>

int factorial(int x);

int combination(int x, int y);


int main(){
	
	int num1,num2;
	
	printf("Kombinasyon hesabi yapan program.");
	printf("\nIlk sayiyi giriniz: ");
	scanf("%d",&num1);
	
	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&num2);
	
	if(num1 >= num2)
	{
		printf("Iki sayinin kombinasyonu: %d",combination(num1,num2));
	}
	else
	{
		printf("Girilen ilk sayi ikinci sayidan kucuk olamaz!");
	}
	
	
	return 0;
}

int factorial(int x){
	
	int i;
	int prod = 1;
	
	for(i=x;i>0;i--)
	{
		prod*=i;
	}
	return prod;
}

int combination(int x, int y){
	
	int factnum1 = factorial(x);
	int factnum2 = factorial(y);
	
	int result = factnum1 / (factnum2 * (factorial(x-y)));
	
	return result;	
}




