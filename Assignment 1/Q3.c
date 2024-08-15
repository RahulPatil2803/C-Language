//3. Accept a 3 digit number from user and find the sum of the digits and also reverse the number
#include<stdio.h>
void main(){
    int num =123;
    int r1,r2,q1,q2,sum,reverse;

    r1=num%10;
    q1=num/10;

    r2=q1%10;
    q2=q1/10;

    sum=r1+r2+q2;
   // reverse=r1,r2,q2;

    printf("Sum of Digit :%d",sum);
    printf("\nReverse of Digit :%d%d%d",r1,r2,q2);
}