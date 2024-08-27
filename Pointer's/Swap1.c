// Swaping program using third variable.

#include<stdio.h>
void swap(int*,int*);
void main(){
    int a=10;
    int b=20;
    printf("Before swapping A and B will be %d and %d\n",a,b);
    swap(&a,&b);
    printf("After swapping A and B will be %d and %d",a,b);
}
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}