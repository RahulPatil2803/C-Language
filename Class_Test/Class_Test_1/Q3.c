//print last 2 digit of number  i/p=223410

#include<stdio.h>
void main(){
   int r1,q1,r2,q2;
   int num=223410;

   r1=num%10;
   q1=num/10;

   r2=q1%10;
   q2=q1/10;

   printf("%d%d",r2,r1);
}