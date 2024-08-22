#include<stdio.h>
void basic_salary();
void greater_no();
void discount();
void menu();

void main(){
    int n;
    printf("Enter any Option :\n");
    printf("1.Basic Salary\n2.greater Number\n3.Discount\nOption :");
    scanf("%d",&n);

    if(n==1){
        basic_salary();
    }
    else if(n==2){
        greater_no();
    }
    else if(n==3){
        discount();
    }
   else {
    printf("Wrong Chooice !");
   }
}

void basic_salary()
{
    int price=8000,discount;
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
void greater_no()
{
     int a=100,b=20,c=30;

    if(a>b){
        if(a>c)
            printf("%d is greater",a);
        else
        printf("%d is gretaer");
    }
    else{
        if(b>c)
        printf("%d is greater",b);
        else
        printf("%d is greater",c);
    }
}
void menu()
{ int num1=10,num2=20;
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
void discount()
{ float price=800, discount,dis_price;
    char Student='y';

    if (Student == 'y'||Student == 'Y') 
    {
        if (price > 500) 
            discount = 20;
         else 
            discount = 10;
    } 
    else 
    {
        if (price > 600) 
            discount = 15;
            else
            printf("No discount aaply on %f\n",price);
    }
    printf("Discount will be %f percent\n",discount);
    dis_price=((price*discount)/100)-price;
    printf("Discounted Price will be %f",dis_price);
    }