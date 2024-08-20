//3. Calculate sum of numbers in the given range. 
#include<stdio.h>
void main(){
    int start,end,sum=0;


    printf("Enter start:");
    scanf("%d",&start);

    printf("Enter End:");
    scanf("%d",&end);

    while (start<=end)
    {
        sum=sum+start;
        start++;
       
    }
     printf("sum is %d",sum);
    
}