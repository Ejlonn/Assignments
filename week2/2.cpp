#include <stdio.h>

int main(){

    int max, sum = 0;
    printf("0' dan girdiginiz sayiya kadar olan cift sayilarin toplamini hesaplayan program.");
    
    printf("\nBir sayi giriniz: ");
    scanf("%d",&max);
    
    int i;
    for (i=0; i < max; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        
    }
    printf("\n0' dan %d 'e kadar olan cift sayilarin toplami: %d' dir.",max,sum);

    return 0;
}
