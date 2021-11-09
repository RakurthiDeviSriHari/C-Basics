#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter four numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("product of %d,%d,%d and %d:%d\n",a,b,c,d,a*b*c*d);
	printf("sum of %d,%d,%d and %d:%d\n",a,b,c,d,a+b+c+d);
	printf("differece of %d,%d,%d and %d:%d",a,b,c,d,a-b-c-d);
}
