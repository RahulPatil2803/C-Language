#include<stdio.h>
void main (){
    int a;
    int b=0;


    int c=(++b||a++)&&(b--||++a);
    
    printf("%d,%d,%d",a,b,c);
}