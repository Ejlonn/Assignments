// bit mask nas�l yap�l�r, at�yorum 4. biti maskelemek istiyoruz bu istedi�imiz bit k olsun. 1 ile left shift (k-1) kadar yaparsak bit mask yapm��
// oluruz yani 4. biti maskelemek 1 << (4-1);bu  0000 1000; Bunlar� and operatorune soktugumuzda istedi�imiz bit harici 0 olur ve istedi�imiz bitin durumuna g�re karar veririz.
// e�er 3. bit olsayd� 1 << (3-1); 0000 0100; sonra bitwise and ( & ) yap�p istemedi�imiz bitleri 0 lam�� oluyoruz. E�er sonu� s�f�rdan farkl�
// ise o bit set yani 1 olmu� oluyor s�f�rsa unset yani 0;

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	srand(time(NULL));
	FILE *fp1,*fp2;
	fp1 = fopen("sayilar.txt","w");
	fp2 = fopen("sayilar.txt","w");
	
	if(fp1 == NULL || fp2 == NULL)
	{
		printf("Dosya olusturulamadi!");
		return 0;
	}
	
	int i;
	for (i=0;i<100;i++)
	{
		int num = rand() % 100;
		
		if(num & (1<<5-1) == 0) // 5-1 olmas�n�n sebebi k.bit - 1 yani 5. biti kontrol ediyoruz		
		{
			fprintf(fp1,"%d ",num | (1<<4-1)); 
		}
		else
		{
			fprintf(fp2,"%d ",num & ~(1<<3-1)); // k. bit mant��� maske de�er kullanarak bit manip�lasyonu ~ kullanarak normalde istedi�imiz bit 1 di�er bitler 0 yerine
												// bu sefer istedi�imiz bit 0 di�er bitler 1 olacak �ekilde olu�turuyoruz. And i�lemine soktugumuzda istedi�imiz bit 0 oluyor.
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
