//2. Print prime number in the given range 1 to n?

#include<stdio.h>
void main()
{
int num,i,n,flag;
printf("Enter the value: ");
 scanf("%d", &n);
 printf("Prime numbers between 1 to %d are:\n", n);
 for(num=2;num<=n;num++)
{
flag=0;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d",num);
}
}
