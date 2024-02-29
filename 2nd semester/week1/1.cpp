#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	
	srand(time(NULL));
	
	FILE *fp;
	int randnum;
	int num;
	
	fp = fopen("sayilar.txt","w+");
	
	if(fp == NULL)
	{
		printf("Dosya olusturulamadi.!");
		return 0;
	}
	
	int i;
	for(i=0;i<100;i++)
	{
		randnum = rand() % 1000;
		fprintf(fp,"%d ", randnum);
	}
	
	rewind(fp);
	
	while(fscanf(fp,"%d ",&num) != EOF)
	{
		printf("%d ",num);
	}	
	
	fclose(fp);	
		
	return 0;
}
