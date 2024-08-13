#include<stdio.h>
void main (){
    int a=0;
    int b=1;


    int c=(++a||--b)&&printf("hii")&&(--b||--a);
    printf("%d,%d,%d",a,b,c);
}