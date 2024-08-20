//10.Add the (first and last) digit of a given number
#include<stdio.h>
void main(){
    int num,rem,sum=0;
    printf("Enter Number :");
    scanf("%d",&num);

    while (num!=0)
    {
        rem=rem%10;
        num=num/10;
        
    }
    sum=num+rem;
printf("Sum of last and first digit will be :%d",sum);
}