// 4. Check number is prime or not

#include<stdio.h>
void main(){
    int count=0,i=2,num;

    printf("Enter Value :");
    scanf("%d",&num);

    while(i<=num){
        if(num%i==0){
            count++;
        }
        i++;
    }

    if(count==1)
    printf("%d is Prime !",num);
    else
    printf("%d is not Prime !",num);
}