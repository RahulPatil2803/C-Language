// check memeory allocation with double data type.

#include<stdio.h>
void main(){
    double b=10.45;
    double *p=&b;
    printf("%f\n",b);
    *(p+2)=11.33;
    *(p+3)=44.45;
    printf("Adress of ptr will be :%d\n",p);
    printf("%d\n",*(p));
    printf("Adress of ptr will be :%d\n",p+1);
    printf("%d\n",*(p+2));
    printf("Adress of ptr will be :%d\n",p+2);
    printf("%d\n",*(p+3));
    printf("Adress of ptr will be :%d\n",p+3);
}