//6. Check number is perfect or not.
#include<stdio.h>
void main(){
    int sum=0,i=1,num;

    printf("Enter Value :");
    scanf("%d",&num);

    while(i<num){
        if(num%i==0){
            sum=sum+i;
        }
        i++;
    }

    if(num==sum)
    printf("%d is strong !",num);
    else
    printf("%d is not strong !",num);
}
