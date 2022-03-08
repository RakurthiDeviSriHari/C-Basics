#include<stdio.h>
main()
{ int n ,r,sum=0,temp;
scanf("%d",&n);
temp=n;
  while(n!=0)
  { r= n%10;
     sum=sum+(r*r*r);
     n =n/10;
  }
    if(sum==temp)
    printf("no is armstong %d",sum);
    else 
    printf("no is not armstong %d",sum);
}
