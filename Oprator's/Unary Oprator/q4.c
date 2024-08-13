#include<stdio.h>
void main (){
    int a=-1;
    int b=0;


    int c=(a++&&--b)||(++a&&++c)||(--b);
    printf("%d,%d,%d",a,b,c);
}