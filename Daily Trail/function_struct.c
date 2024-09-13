     // pass by value
#include<stdio.h>
#include<string.h>

typedef struct student
{
    int roll_no;
    char name[10];
    int marks;
}student;

student store();
student display();

student store(student *arr)
{
   
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
}
student display(student s1)
{
     int m=1;
    for(int i=0;i<3;i++)
    {
         printf("\n*****Here details of all student  %d",m);
        printf("\nRoll No :%d",s1.roll_no);
        printf("\nName :%s",s1.name);
        printf("\nMarks :%d",s1.marks);
        m++;
    }
}

void main()
{
    struct student s1;
     student arr[5];
   s1= store(&s1);
    display(s1);
}


