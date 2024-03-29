#include <stdio.h>

int main(){
	
	
	char string[100];
	
	printf("Metin giriniz: ");
	gets(string);
	
	int diff = 'a' - 'A';//sonuc 32 
	
	printf("Metinin Yeni hali: ");
	
	int i;
	for(i=0; string[i] != '\0';i++)
	{
		if (string[i]>='A' && string[i]<='Z')
		{
			string[i]+=diff;//32 eklenmiþ hali o harfin kücük harfe dönüþmüþ hali
		}
		else if(string[i]>='a' && string[i]<='z')
		{
			string[i]-=diff; // 32 cýkarýlmýþ hali o harfin büyük harfe dönüþmüþ hali
		}
	}
	printf("%s",string);

	
	return 0;
}
