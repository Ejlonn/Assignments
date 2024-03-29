#include <stdio.h>

int main(){
	
	char string[100];
	printf("Metin giriniz: ");
	gets(string);
	
	int i;
	printf("Girdiginiz metin: ");
	for(i=0;string[i]!='\0';i++)
	{
		printf("%c",string[i]);
	}
	int ctr = 0;
	
	for(i=0; string[i] !='\0' ;i++ )
	{
		if(string[i] == ' ')
		{
			ctr++;
		}
	}
	ctr++;
	
	printf("\nGirdiginiz metin %d kelimeden olusuyor.",ctr);
	
	
	
	return 0;
}
