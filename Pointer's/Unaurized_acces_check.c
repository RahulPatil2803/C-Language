//check the unaurized acces 

#include<stdio.h>
void main(){


int a=10;
printf("%d\n",a);
int *ptr=&a;
*ptr=100;
printf("%d",a);
}