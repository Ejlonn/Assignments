#include <stdio.h>

int digitSum(int x);

int main(){
	
	int num;
	
	printf("Girilen sayinin basamak degerlerini toplayan program.");
	
	printf("\nBir sayi giriniz: ");
	scanf("%d",&num);
	
	printf("Girilen sayinin basamak degerleri toplami: %d",digitSum(num));
		
	
}

int digitSum(int x){
	
	int result = 0;
	
	while(x>0)
	{
		result += x%10;
		x /= 10;
	}
	return result;
}
