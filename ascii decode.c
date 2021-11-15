//program to decode three numbers into given outputs
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	printf("\nAs per ascii corresponding characters are:%c%c%c",a+95,b+95,c+95);
}

