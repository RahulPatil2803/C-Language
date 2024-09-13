#include<stdio.h>
#include<string.h>
struct Employee
{
    int empId;
    char name[10];
    double salary;
};
void main(){
    struct Employee e1,e2,e3;
int ch;
    e1.empId=100;
    strcpy(e1.name,"Rahul");
    e1.salary=10000;

    e2.empId=101;
    strcpy(e2.name,"Devashree");
    e2.salary=18000;

    e3.empId=102;
    strcpy(e3.name,"Riya");
    e3.salary=5000;

    //details perint 
    printf("Choose an option from below :\n1.Display all Employee \n2.Highest salary from employee\n3.Lowest salary from employee\n");
    printf("Enter choice :");
    scanf("%d",&ch);

    if(ch==1)
    {
    printf("\t Emp 1 :\n");
    printf("Emp id :%d",e1.empId);
    printf("\nEmp Name :%s",e1.name);
    printf("\nEmp salary :%lf\n",e1.salary);

    printf("\t Emp 2 :\n");
    printf("Emp id :%d",e2.empId);
    printf("\nEmp Name :%s",e2.name);
    printf("\nEmp salary :%lf\n",e2.salary);

     printf("\t Emp 3 :\n");
    printf("Emp id :%d",e3.empId);
    printf("\nEmp Name :%s",e3.name);
    printf("\nEmp salary :%lf",e3.salary);
    }

    else if(ch==2)
    {
        if(e1.salary > e2.salary)
        printf("Rahul has high salary");
        else if(e2.salary>e3.salary)
        printf("Devashree has high salary ");
        else
        printf("Riya has high salary ");
    }
    else if (ch==3){
        if(e1.salary>e2.salary)
        printf("Devashree has low salary");
        else if(e2.salary>e3.salary)
        printf("Riya has low salary ");
        else
        printf("Rahul has low salary ");
    }
    else{
        printf("Wrong output");
    }


}