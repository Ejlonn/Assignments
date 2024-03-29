#include <stdio.h>
#include <string.h>

void rightRotate(char *str, int shift) {
   
    int length = strlen(str);

    char temp;
    char *last = str + length - 1; 

    for (int i = 0; i < shift; i++) {
        temp = *last;
       
	    for (char *ptr = last; ptr > str; ptr--) {
            *ptr = *(ptr - 1);
        }
       
	    *str = temp;
    }
}

int main() {
    char text[100];
    int shift;
    
    printf("Bir metin giriniz: ");
    fgets(text,sizeof(text),stdin);
    
    printf("Metin kac adim saga kaydirilsin? ");
    scanf("%d",&shift);
    
    printf("Girdiginiz metin: ");
	puts(text);    
 	
 	rightRotate(text, shift);
 	
	printf("Saga kaydirilmis metin: ");
 	puts(text);	
    
    return 0;
}

