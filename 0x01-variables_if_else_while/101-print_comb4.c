#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void) {
    int n,i,m;
    for(m=48;m<=57;m++){
        for(i=48;i<=57;i++){
           for(n=48;n<=57;n++){
               if((n!=i && n!=m && m!=i) && (m<i && i<n)){
                   putchar(m);
                   putchar(i);
                   putchar(n);
                   if(m==55 && i==56 && n==57)
                   break;
                   putchar(',');
                   putchar(' ');
               }
           }
        }

        }
    putchar('\n');

    return 0;
}
