/*5. Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a student and 
he has purchased more than 500 than discount is 20% otherwise discount is 10%.But if he is not a student then if he
 has purchased more than 600 discount is 15% otherwise there is not discount. */

 #include<stdio.h>
int main()
{
    float price=800, discount,dis_price;
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
