#include <stdio.h>


int main(){

    int array[50];
    int belowCounter = 0, aboveCounter = 0,sum = 0;
    float avg = 0;

    int i;
    printf("Lutfen 50 adet tam sayi olacak sekilde dizi elemani giriniz\n");
    for(i=0;i<50;i++)
    {
        printf("%d'nci sayiyi giriniz: ",i+1);
        scanf("%d",&array[i]);
        sum += array[i];
    }

    avg = (float)sum / 50;
    
    for(i = 0; i < 50; i++)
    {
        if(array[i] < avg)
        {
            belowCounter++;
        }
        else
        {
            aboveCounter++;
        }
    }
    

    printf("\nDizi elemanlarinin ortalamasi: %.2f'dir",avg);
    printf("\n%d adet sayi ortalamanin altindadir.",belowCounter);
    printf("\n%d adet eleman ortalamanin ustundedir.",aboveCounter);




    return 0;
}