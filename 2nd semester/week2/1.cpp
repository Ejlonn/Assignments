#include <stdio.h>

unsigned int leftRotate(unsigned int num, int shift)
{
	
	return (num<<shift) | (num>>(32 - shift));
}


int main(){
	
	unsigned int num;
	int shift;
	
	printf("Left rotate shift yapilmasini istediginiz sayiyi giriniz: ");
	scanf("%u",&num);
	
	printf("Shift miktarini giriniz: ");
	scanf("%d",&shift);
	
	unsigned int result = leftRotate(num,shift);
	printf("Girilen sayi: %u",num);
	printf("\nGirilen sayinin %d kadar left rotate shift edilmesi sonucu olusan sayi: %u",shift,result);
	

	return 0;
}
