#include<stdio.h>
int main()
{
int a,b[50],i,sum=0;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=a;i++)
sum=sum+b[i];
printf("the avg is %d",sum/a);
return 0;
}
