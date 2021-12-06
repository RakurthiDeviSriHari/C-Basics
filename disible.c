#include<stdio.h>
void main()
{
	int a;
	printf("enter one numbers");
	scanf("%d",&a);
	if(((a%3)&&(a%7))==0)
	printf("number is divisible by 3 and 7 ");
	else
	printf("number is divisible by 3 and 7");
}
