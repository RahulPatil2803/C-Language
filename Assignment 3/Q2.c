//2. Print table for the given number.
#include<stdio.h>
void main(){
    int num,i=1;
    int mult;
    
    printf("Enter Number:");
    scanf("%d",&num);

    while (i<11)
    {
        mult=i*num;
        printf("%d * %d = %d\n",num,i,mult);
        i++;
    }
    
}