#include<stdio.h>
void main (){
    int a=0;
    int b=1;


    int c=(a++&&b++)&&(++a||--b);
    printf("%d,%d,%d",a,b,c);
}