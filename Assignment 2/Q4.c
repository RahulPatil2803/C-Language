/*4. Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice,then 
based on that perform the desired operations. */
#include<stdio.h>
void main(){
    int num1=1000;
    float final_op;
    char ch ='2';

    printf("Choices are :\n 1.Even -odd\n2.Salary\n");

    if(ch=='1')
    {
        if(num1%10==0)
            printf("%d is even",num1);
        else
        printf("%d is odd",num1);
    }   
    else if(ch=='2')
    {
        int da=150;
        int hra=45;
        int basic_sal=da+hra+num1;
        printf("Basic Salary Will be %d",basic_sal);
    }
    else 
    printf("No choice selected");
} 