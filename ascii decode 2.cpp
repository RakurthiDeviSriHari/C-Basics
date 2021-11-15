//program to decode characters into given outputs
#include<stdio.h>
void main()
{
	char a,b,c;
	printf("enter the characters:");
	scanf("%c%c%c",&a,&b,&c);
	printf("\nAs per ascii corresponding integers are:%d %d %d",a-95,b-95,c-95);
}

