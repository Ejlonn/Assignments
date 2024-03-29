#include <stdio.h>

int checkPrime(int x);

int main(){
	
	int num,isPrime=0;
	
	printf("Girilen sayi asal mi degil mi kontrol eden program.");
	
	printf("\nBir sayi giriniz: ");
	scanf("%d",&num);
	
	if (num > 0)
	{
		isPrime = checkPrime(num);
	}
	else
	{
		printf("Girilen sayi negatif olamaz!");
	}
	if (isPrime == 1 && num !=1)
	{
		printf("Girilen sayi asaldir.");
	}
	else
	{
		printf("Girilen sayi asal degildir.");
	}	
	
	return 0;
}

int checkPrime(int x){
	
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i == 0)
		{
			return 0;
		}
	}
	return 1;
	
}




