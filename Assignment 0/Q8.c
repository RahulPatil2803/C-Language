//. Assign two number and swap it using third variable

#include<stdio.h>
void main(){
    int a=10;
    int b=30;
    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("After swapping value of a =%d and b=%d",a,b);
}