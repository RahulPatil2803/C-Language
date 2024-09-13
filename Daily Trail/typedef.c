#include<stdio.h>
#include<string.h>

typedef struct student
{
    int roll_no;
    char name[10];
    int marks;
}student;

void main()
{
    student arr[5];
    int n=1;
    for(int i=0;i<3;i++)
    {
        
        printf("*****Enter Details for Student %d",n);
        printf("\nEnter Roll No :");
        scanf("%d",&arr[i].roll_no);

        printf("\nEnter Name :");
        scanf("%s",arr[i].name);

        printf("\nEnter Marks :");
        scanf("%d",&arr[i].marks);
        n++;
    }
    int m=1;
    for(int i=0;i<3;i++)
    {
         printf("\n*****Here details of all student  %d",m);
        printf("\nRoll No :%d",arr[i].roll_no);
        printf("\nName :%s",arr[i].name);
        printf("\nMarks :%d",arr[i].marks);
        m++;
    }
    
}
