// All arithmetic operations
#include<stdio.h>
void main()
{
	int q,a,b,s,d,p,r;
	
	a=11;
	b=2;
	s=a+b,d=a-b,p=a*b,q=a/b,r=a%b;
	printf("sum of %d and %d: %d\n",a,b,s);
           printf("substraction of %d and %d: %d\n",a,b,d);
           printf("multiplication of %d and %d: %d\n",a,b,p);
           printf("Division of %d and %d: %d\n",a,b,q);
           printf("modulo division of %d and %d: %d",a,b,r);
}
