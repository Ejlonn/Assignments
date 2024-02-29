#include <stdio.h>

int isPrime(int num);

int main(){
	
	FILE *fp1, *fp2;
	int num;;
	
	fp1 = fopen("sayilar.txt","r+");
	fp2 = fopen("sayilar2.txt","w+");
	
	if(fp1 == NULL)
	{
		printf("Dosyadan sayilar okunamadi!");
		return 0;
	}		
	if(fp2 == NULL)
	{
		printf("Dosya olusturulamadi!");
		return 0;
	}

	while(fscanf(fp1,"%d ",&num) != EOF)
	{
		
		if(isPrime(num))
		{
			fprintf(fp2,"%d ",num);
		}
	}
	
	fclose(fp1);
	
	fseek(fp2,0,SEEK_SET);
	
	printf("Asal sayilar: ");
	while(fscanf(fp2,"%d ",&num) != EOF)
	{
		printf("%d ",num);
	}

	fclose(fp2);
		
	return 0;
}

int isPrime(int num){
	
	if(num < 2)
	{
		return 0;
	}
	
	int i;
	for(i=2; i*i <= num; i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
	
}

