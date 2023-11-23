#include <stdio.h>


int main(){

    int array1[10],array2[10],temp;
    
    printf("Ilk dizinin cift indisleriyle ikinci dizinin cift indislerini yer degistiren program.\n");
    printf("Lutfen ilk diziyi giriniz: ");
    
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&array1[i]);
    }
    
    printf("Lutfen ikinci diziyi giriniz: ");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&array2[i]);
    }

    for (i = 0; i < 5; i++)
    {
        temp = array1[2*i];
        array1[2*i] = array2[(2*i)+1];
        array2[(2*i)+1] = temp;
    }
    
    printf("Ilk dizinin yeni hali: ");
    for(i=0; i<10; i++)
    {
        printf("%d ",array1[i]);
    }

    printf("\nIkinci dizinin yeni hali: ");
    for(i=0; i<10; i++)
    {
        printf("%d ",array2[i]);
    }

    return 0;
}