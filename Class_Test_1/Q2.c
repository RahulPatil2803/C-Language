//WAP to check if it is leap year or not 

#include<stdio.h>
void main(){
    int year;
    printf("Enter Year :");
    scanf("%d",year);



if(year%4==0)
printf("%d is leap ",year);
else
printf("%d is not leap Year",year);
}