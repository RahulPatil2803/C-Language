//7. Find factorial of number
#include<stdio.h>
void main(){
    int num,i;


    printf("Enter Number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("%d\n",i);
    }

    // printf("%d",fact);
    
}