//1. Find the price of item when discount is given (specify different discount based on price)

#include<stdio.h>
void main(){
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
