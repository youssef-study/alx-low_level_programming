#include <stdio.h>
#include <stdlib.h>

int _sqrt_recursion(int n)
{
	static int h=0;
	 h++;
	 if(h>n || n<0)
	 return (-1);
     else if (n == h*h)
     return(h);
     else 
     return (_sqrt_recursion(n));
 }
