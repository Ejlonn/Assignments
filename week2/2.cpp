#include <stdio.h>

int main(){

    int max, sum = 0, count = 0;
    float avg = 1;
    printf("0' dan girdiginiz sayiya kadar olan cift sayilarin toplamini ve ortalamasini hesaplayan program.");
    
    printf("\nBir sayi giriniz: ");
    scanf("%d",&max);
    
    int i;
    for (i=0; i < max; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            count++;
        }
        
    }
    avg = sum/count;
    printf("\n0' dan %d 'e kadar olan cift sayilarin toplami: %d' dir.",max,sum);
  
    printf("\n0' dan %d 'e kadar olan cift sayilarin ortalamasi: %.2f' dir.",max,avg);


    return 0;
}
