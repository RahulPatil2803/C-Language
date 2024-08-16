// 3. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations. 

#include<stdio.h>
void main(){
    int num1=10,num2=20;
    char ch='-';
    float op;

    if(ch=='+')
    {
        op=num1+num2;
    }
    else if(ch=='-'){
        op=num1-num2;
    }
    else if(ch=='/')
    {
        op=num1/num2;
    }
    else if (ch=='%')
    {
        op=num1%num2;
    }
    else{
        printf("No any Choice ");
    }
    printf("Answer will be %f",op);
}