#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	
	int *p, *temp;
	int currSize = 10;
	int size = 0;
	
	p = (int*)calloc(100,sizeof(int));
	
	if(p == NULL){
		printf("Bellek ayrilamadi!");
		return 0;
	}
	
	srand(time(NULL));
	
	FILE *fp;
	fp = fopen("sayi.txt","w+");
	
	if(fp == NULL){
		printf("Dosya olusturma hatasi!");
		return 0;
	}
	
	int randNum;
	int i;
	for(i=0; i<100; i++){
		randNum = rand() % 100;
		fprintf(fp,"%d,",randNum);
	}	
    
    fseek(fp,0,SEEK_SET);
	for(i=0; i<100; i++){
		
		int control;
		fscanf(fp,"%d,",&control);
		
		if(((control & (1 << 4)) == 0)){
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
			p[size] = control;
			size++;		
		}
	}
	printf("5.biti 0 olan sayilar: \n");
	for(i=0; i<size; i++){
		printf("%d ",p[i]);
	}
	
	fclose(fp);
	
	free(p);
	
	return 0;
}
