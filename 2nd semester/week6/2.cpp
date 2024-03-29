#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int *p, *temp;
	int currSize = 10;
	int size = 0;
	int num;
	
	p = (int*)malloc(currSize * sizeof(int));
	if (p == NULL){
		printf("Bellek ayrilamadi!");
		return 0;
	}
	
	printf("Tam sayi giriniz. Cikmak icin negatif sayi giriniz: \n");
	
	while(1){
		
		printf("Tam sayi girin: ");
		scanf("%d",&num);
		
		if(num<0) 
			break;

		if(num % 3 == 0 && num % 5 == 0){
			if(size >= currSize){
				currSize *= 2;
				temp = (int*)realloc(p, currSize * sizeof(int));
				if(temp == NULL){
					printf("Bellek yeniden boyutlandirma hatasi!");
					free(p);
					return 0;
				}
				p = temp;
			}
			p[size] = num;
			size++;		
		}
	}
	
	printf("3'e ve 5'e tam bolunen sayilar: ");
	for(int i = 0; i<size; i++){
		printf("%d ", p[i]);
	}

	printf("\n");
	
	free(p);
	
	return 0;
}
