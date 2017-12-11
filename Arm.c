#include<stdio.h>
void main()
{
int n,t,r,re;
printf("Enter the number:");
scanf("%d,&n");
t=n;
while(t!=0)
{
r=t%10;
re=re+r*r*r;
t=t/10;
}
if(re==t
{
printf("%d is an Armstrong number",n);
}
else
{
printf("%d is not an Armstrong number",n);
}
}
