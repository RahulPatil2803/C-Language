//check the unaurized acces 

#include<stdio.h>
void main(){


int a=10;
printf("%d\n",a);   //original value of 'a'
int *ptr=&a; //Here *ptr will be locate only adress of 'a' which may be any value which are assigned by the OS 
*ptr=100;    //Here we assign value 100 in location of *ptr which are actually variable a
printf("%d",a); //After updating value of 'a'
}
