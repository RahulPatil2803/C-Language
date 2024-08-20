//5. Check number is armstrong or not?
#include<stdio.h>
void main(){

    int num,sum=0,rem,temp;
    printf("Enter Number :");
    scanf("%d",&num);

    temp=num;

    while(temp>0){
        rem=temp%10;
        temp=temp/10;
        sum=sum+(rem*rem*rem);
    }
    if(sum==num)
    printf("%d is armstrong !",num);
    else
    printf("%d is not armstrong !",num);
}