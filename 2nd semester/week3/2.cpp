#include <stdio.h>

int sum(int num){
	
	if(num <= 1)
	{
		return num;
	}
	return num + sum(num-1);
}


int main(){
	
	int num;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&num);
	
	printf("Kendisine kadar olan pozitif sayilarin toplami: %d",sum(num));
	
	
	return 0;
}
