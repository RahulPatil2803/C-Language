//.1 Print armstrong number in the the given range 1 to n?
#include<stdio.h>
void main() 
{
 int num,originalnum,sum,digit,n;
 printf("Enter the value: ");
 scanf("%d", &n);
 printf("Armstrong numbers from 1 to %d are:\n", n);
 for (int num = 1; num <= n; num++)
{ 
sum=0;
originalnum=num;
while(originalnum !=0)
{
digit=originalnum%10;
sum+=digit*digit*digit;
originalnum/=10;
}
 if (sum==num)
 printf("%d",num);
 }
}
