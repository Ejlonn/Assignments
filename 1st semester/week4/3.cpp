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
			string[i]+=diff;//32 eklenmi� hali o harfin k�c�k harfe d�n��m�� hali
		}
		else if(string[i]>='a' && string[i]<='z')
		{
			string[i]-=diff; // 32 c�kar�lm�� hali o harfin b�y�k harfe d�n��m�� hali
		}
	}
	printf("%s",string);

	
	return 0;
}
