#include <stdio.h>
#include <math.h>

int main(){

    int num;
    int oddCounter = 0;
    double evenCounter = 0; // bu sayacı double almamın sebebi math.h fonksiyonundaki pow fonksiyonu argüman olarak pow(double x, double y) alıyor.
    double avg = 0, geo= 1;

    printf("Tek sayilarin aritmetik, cift sayilarin geometrik ortalamasini bulan program.\n");
    printf("4 Tane sayi giriniz: ");
    
    int i;
    for(i = 0; i < 4 ; i++) // çiftse geometrik çarpıma tekse ortalama verisine ekleme yapıyoruz, hangi işlem yapılırsa onun sayacı bir arttırılıyor
    {
        scanf("%d",&num);
        if (num % 2 == 0)
        {
            geo *= num;
            evenCounter++;
        }
        else if (num % 2 == 1)
        {
            {
            avg += num;
            oddCounter++;
            }
        }
    }
    
    if (oddCounter != 0 && evenCounter != 0) // hem tek hem çift sayıların girildigi koşulda ikisi de basılıyor
    {
        printf("\nGirilen sayilardan cift olanlarin geometrik ortalamasi %.2lf'dir.",pow(geo,(1/evenCounter)));
        printf("\nGirilen sayilardan tek olanlarin aritmetik ortalamasi %.2lf'dir.",avg/oddCounter);
    }
    
    else if (evenCounter == 0) // eğer çift sayı girilmezse kök almak için 1/evenCounter ile üs 
                              // aldıgımız için ve evenCounter 0 olacağı için sıkıntı yaşayacağız.
    {
        printf("\nCift sayi girmediginiz icin geometrik ortalama hesaplanamadi!");
        printf("\nGirilen sayilardan tek olanlarin aritmetik ortalamasi %.2lf'dir.",avg/oddCounter);
    }
    
    else // tek sayi girilmezse iki değer 0 olacağı için burada belirsizlik durumunu ortadan kaldırıyoruz.
    {
        printf("\nTek sayi girmediginiz icin aritmetik ortalama hesaplanamadi!");
        printf("\nGirilen sayilardan cift olanlarin geometrik ortalamasi %.2lf'dir.",pow(geo,(1.0/evenCounter)));
    }
    
    return 0;
}