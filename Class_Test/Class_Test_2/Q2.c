// Write a program to determine number is Positive / Negative / Nutral .
#include <stdio.h>

 void main() {
    int n; 
    printf("Enter Number :"); 
    scanf("%d",&n); 

    if(n>0)
    printf("%d is Positive",n);
    else if(n<0)
    printf("%d is Negative",n);
    else
    printf("%d is Nutral");
} 

 
