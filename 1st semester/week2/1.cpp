#include <stdio.h>

int main(){

    int midterm,final,makeup;
    float note1,note2;

    printf("Not Hesaplama programina hosgeldiniz.\n");
    printf("Gecme notu 60'dir.\n");
    printf("Vize notunun %%40'i Final notunuzun %%60i hesaplanir.");
    
    printf("\nVize notunuzu giriniz: ");
    scanf("%d",&midterm);
    printf("Final notunuzu giriniz: ");
    scanf("%d",&final);

    note1 = (final * 0.6) + (midterm * 0.4);
    printf("Notunuz: %.2f\n",note1);

    if (note1 < 60)
    {
        printf("Notunuz 60'in altinda kaldigi icin butunlemeye kaldiniz!\n");
        printf("Butunleme notunuzu giriniz: ");
        scanf("%d",&makeup);
        note2 = (makeup * 0.6) + (midterm * 0.4);
        if (note2 < 60)
        {
            printf("\nNotunuz: %.2f",note2);
            printf("\nKaldiniz.");
        }
        else
        {
            printf("\nNotunuz: %.2f",note2);
            printf("\nGectiniz.");
        }
        
    }
    else
    {
        printf("Gectiniz.");
    }
    
    return 0;
}