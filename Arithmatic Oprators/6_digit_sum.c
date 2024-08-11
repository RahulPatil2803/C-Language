#include<stdio.h>
void main(){
    int num= 123456;
    int r1,r2,r3,r4,r5,r6,q1,q2,q3,q4;
    int total;

    r1=num%10;
    q1=num/10;

    r2=q1%10;
    q2=q1/10;

    r3=q2%10;
    q3=q2/10;

    r4=q3%10;
    q4=q3/10;

    r5=q4%10;
    r6=q4/10;

    total=r1+r2+r3+r4+r5+r6;
    printf("Sum of 6 Digit :%d",total);
}