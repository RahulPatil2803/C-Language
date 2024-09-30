//2. Write a program to find greatest of three numbers using nested if-else.

#include<stdio.h>
void main(){
    int a=100,b=20,c=30;
// hello moto 
    if(a>b){
        if(a>c)
            printf("%d is greater",a);
        else
        printf("%d is gretaer");
    }
    else{
        if(b>c)
        printf("%d is greater",b);
        else
        printf("%d is greater",c);
    }
}