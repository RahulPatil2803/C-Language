#include<stdio.h>
void main (){
    int a=10;
    int b=20;
    //int c=30;


    int c=(a++&&b++)||(--b&&++a);
    printf("%d,%d,%d",a,b,c);
}