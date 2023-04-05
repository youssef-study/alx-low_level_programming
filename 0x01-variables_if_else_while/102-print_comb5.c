#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void) {
    int i,m,k,l,h;
    for(m=48;m<=57;m++){
        for(i=48;i<=56;i++){
            h=i;
        for(l=m;l<=57;l++){
           for(k=h+1;k<=57;k++){
               putchar(m);
               putchar(i);
               putchar(' ');
               putchar(l);
               putchar(k);
               putchar(',');
               putchar(' ');
           }
         h=47;
    }
        }
    }

    return 0;
}
