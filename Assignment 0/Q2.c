// Write a program to calculate the percentage of student based on marks of any 5 subjects.

#include<stdio.h>
void main(){
    int sub1=55;
    int sub2=77;
    int sub3=89;
    int sub4=97;
    int sub5=78;
    double total_marks;
    float percent;

    total_marks=sub1+sub2+sub3+sub4+sub5;
    percent=(total_marks/500)*100;

    printf("Total Percentage is :%f",percent);
}