
#include <stdio.h>
 
int greatestCommonDivisor(int num1, int num2)
{
    if (num1 == 0)
        return num2;
    return greatestCommonDivisor(num2 % num1 , num1);
}
 

int main()
{
    int lowestCommonMultiple = 1, num1,num2;
    
    printf("OBEB ve OKEK'i alinmasini istediginiz ilk sayi: ");
    scanf("%d",&num1);
    
    printf("OBEB ve OKEK'i alinmasini istediginiz ikinci sayi: ");
    scanf("%d",&num2);
    
    lowestCommonMultiple = (num1 * num2) / greatestCommonDivisor(num1,num2);
    
    printf("Iki sayinin OBEB'i: %d",greatestCommonDivisor(num1,num2));
    printf("\nIki sayinin OKEK'i: %d",lowestCommonMultiple);
    
    return 0;
}
