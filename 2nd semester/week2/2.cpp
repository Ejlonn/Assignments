// bit mask nasýl yapýlýr, atýyorum 4. biti maskelemek istiyoruz bu istediðimiz bit k olsun. 1 ile left shift (k-1) kadar yaparsak bit mask yapmýþ
// oluruz yani 4. biti maskelemek 1 << (4-1);bu  0000 1000; Bunlarý and operatorune soktugumuzda istediðimiz bit harici 0 olur ve istediðimiz bitin durumuna göre karar veririz.
// eðer 3. bit olsaydý 1 << (3-1); 0000 0100; sonra bitwise and ( & ) yapýp istemediðimiz bitleri 0 lamýþ oluyoruz. Eðer sonuç sýfýrdan farklý
// ise o bit set yani 1 olmuþ oluyor sýfýrsa unset yani 0;

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
		
		if(num & (1<<5-1) == 0) // 5-1 olmasýnýn sebebi k.bit - 1 yani 5. biti kontrol ediyoruz		
		{
			fprintf(fp1,"%d ",num | (1<<4-1)); 
		}
		else
		{
			fprintf(fp2,"%d ",num & ~(1<<3-1)); // k. bit mantýðý maske deðer kullanarak bit manipülasyonu ~ kullanarak normalde istediðimiz bit 1 diðer bitler 0 yerine
												// bu sefer istediðimiz bit 0 diðer bitler 1 olacak þekilde oluþturuyoruz. And iþlemine soktugumuzda istediðimiz bit 0 oluyor.
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
