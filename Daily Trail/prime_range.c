// 4. Check number is prime or not

#include<stdio.h>



void main(){
    int num1,num2,i,j;

   printf("Enter Starting Value :");
    scanf("%d",&num1);

    printf("Enter Ending Value :");
    scanf("%d",&num2); 

for(i=num1;i<=num2;i++) // Outer Loop(Starting and ending loop) 
{
    for(j=2;j<=i/2;j++) // Inner Loop(for converting loop)
    {
        if(i%j==0)
        break;
    }
    //printf("%d",i);
    if(j==(i/2)+1)
    printf("%d\n",i);

}
}