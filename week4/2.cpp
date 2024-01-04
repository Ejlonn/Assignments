#include <stdio.h>

int main(){
	
	char string[100],word[20];
	
	printf("Metin giriniz: ");
	gets(string);
	
	printf("Aramak istediginiz kelimeyi giriniz: ");
	gets(word);
	
	int wordStart = -1;
	
	int i,j;
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==word[0])
		{
			j = 1;
			while(string[i+j] == word[j])
			{
				j++;
			}
			if(word[j]=='\0')
			{
				wordStart = i;
				break;
			}
		}
	}
	if (wordStart == -1)
	{
		printf("\nAradiginiz kelime bulunamadi!");
	}
	else
	{
		printf("Aradiginiz kelime %d. harften basliyor",wordStart+1);
	
	}	
	
	
	return 0;
}
