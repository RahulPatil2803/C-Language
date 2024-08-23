// Type III (With return type & with parameter)

#include<stdio.h>
double basic_salary(double);
double std_discount(double);
void main(){

    double prc;
    int n;
    printf("Enter any option from Menu\n1.basic_Salary\n2.Student Discount :\n");
    scanf("%d",&n);
    printf("Enter Price for opration:");
    scanf("%d",&prc);

    if(n==1){
        basic_salary(prc);
    }
    else if(n==2){
        std_discount(prc);
    }
    else{
        printf("Wrong choice !");
    }
}
double basic_salary(double price)
{
    int discount;
    float dis_price,dis_price1;
    if(price>=10000)
    {
        discount=50;
    }
    else if(price>=7000){
        discount=40;
    }
    else if(price>=3000){
        discount=25;
    }
    else{
        printf("No discount apply on %d price !\n",price);
    }

    dis_price=((price*discount)/100);
    dis_price1=price-dis_price;
    printf("Discount apply %d Percent\n",discount);
    printf("Discounted Price Will be:%f",dis_price1);
}
double std_discount(double price)
{
   // double price;
    int discount,dis_price;
    char ch='y';

    if (ch == 'y'||ch == 'Y') 
    {
        printf("Student\n");
        if (price > 500) 
            discount = 20;
         else 
            discount = 10;
    } 
    else 
    {
        printf("Not student");
        if (price > 600) 
            discount = 15;
            else
            printf("No discount aaply on %f\n",price);
    }
    printf("Discount will be %d percent\n",discount);
    dis_price=((price*discount)/100)-price;
    printf("Discounted Price will be %d",dis_price);
}
