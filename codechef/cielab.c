#include<stdio.h>
int main()
{
int a,b,c,r;
scanf("%d",&a);
scanf("%d",&b);
c=a-b;
r=c%10;
if(r==9)
{c=c-1;
}
else
{
c=c+1;
}
printf("%d",c);
return 0;
}  