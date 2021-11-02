// All arithmetic operations
#include<stdio.h>
void main()
{
	int a,b,s,d,p,q,r;
	a=11;
	b=2;
	s=a+b,d=a-b,p=a*b,q=a/b,r=a%b;
	printf("sum of %d and %d: %d",a,b,s);
           printf("substraction of %d and %d: %d",a,b,d);
           printf("multiplication of %d and %d: %d",a,b,p);
           printf("Divisin of %d and %d: %d",a,b,q);
           printf("modulo division of %d and %d: %d",a,b,r);
}
