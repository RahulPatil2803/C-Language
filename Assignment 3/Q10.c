//10.Add the (first and last) digit of a given number
#include<stdio.h>
void main(){
    int n,rem,q,s,sum;
printf("Enter Number :");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        q=n/10;
        n=q/10;
        //break;
    }
    sum =n+s;
    printf("%d",sum);
    
}