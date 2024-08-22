#include<stdio.h>
void Temprature_conversion();
void are_para();
void sum_and_result();
void even_odd();
void basic_salary();
void marrige_eligible();
void main()
{
    int n;
    printf("Enter any Option :\n");
    printf("1.emprature_conversion\n2.re_para\n3.sum_and_result\n4.even_odd\n5.basic_salary\n6.marrige_eligible\nOption :");
    scanf("%d",&n);

    if(n==1){
        Temprature_conversion();
    }
    else if(n==2){
        are_para();
    }
    else if(n==3){
        sum_and_result();
    }
    else if (n==4){
        even_odd();
    }
    else if(n==5){
        basic_salary();
    }
    else if(n==6){
        marrige_eligible();
    }
    else{
        printf("Wrong Choice !");
    }


}
void Temprature_conversion()
{
    int c=18;
    float f;
    f=(c*1.8)+32;

    printf("Conversion of F to C will be %3f",f);
}
void are_para()
{
     int r=3;
    float area ,per;
    area =(3.14*r*r);
    per=2*(3.14*r);

    printf("Area Will be :%f\n",area);
    printf("Perimeter will be :%f",per);
}
void sum_and_result()
{
     int num =123;
    int r1,r2,q1,q2,sum,reverse;

    r1=num%10;
    q1=num/10;

    r2=q1%10;
    q2=q1/10;

    sum=r1+r2+q2;
   // reverse=r1,r2,q2;

    printf("Sum of Digit :%d",sum);
    printf("\nReverse of Digit :%d%d%d",r1,r2,q2);
}
void even_odd()
{
     int num=15;
    if(num%2==0){
        printf("%d will be even",num);
    }
    else{
        printf("%d will be odd",num);
    }
}
void basic_salary()
{
     int basic_sal=7000;
    float total_sal,da,ta,hra;


    if(basic_sal<=5000){
        da=(basic_sal*10)/100;
        ta=(basic_sal*20)/100;
        hra=(basic_sal*25)/100;
    }
    else{
        da=(basic_sal*15)/100;
        ta=(basic_sal*25)/100;
        hra=(basic_sal*30)/100;
    }

    total_sal=da+ta+hra;
    printf("Salary Will be %f",total_sal);

}
void marrige_eligible()
{
     int male_age = 25;
    int female_age = 19;
    char gender = 'M'; 

    if (gender == 'M') {
        if (male_age >= 21) {
            printf("Male is eligible to marry.\n");
        } else {
            printf("Male is not eligible to marry.\n");
        }
    } else if (gender == 'F') {
        if (female_age >= 18) {
            printf("Female is eligible to marry.\n");
        } else {
            printf("Female is not eligible to marry.\n");
        }
    } else {
        printf("Invalid gender.\n");
    }
}