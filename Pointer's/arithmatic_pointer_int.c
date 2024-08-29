// check memeory allocation with integer data type.
#include<stdio.h>
void main()
{
    int a=10;
    int *ptr=&a;

   // printf("%d\n",a);

    *(ptr+2)=20;
    *(ptr+3)=40;
    printf("Adress of ptr will be :%d\n",ptr);
    printf("%d\n",*(ptr));
    printf("Adress of ptr will be :%d\n",ptr+1);
    printf("%d\n",*(ptr+2));
    printf("Adress of ptr will be :%d\n",ptr+2);
    printf("%d\n",*(ptr+3));
    printf("Adress of ptr will be :%d\n",ptr+3);
/*   double b=10;
    double *p=&b;

    *(p+2)=11;
    *(p+3)=44;
    printf("Adress of ptr will be :%d\n",p);
    printf("%d\n",*(p));
    printf("Adress of ptr will be :%d\n",p+1);
    printf("%d\n",*(p+2));
    printf("Adress of ptr will be :%d\n",p+2);
    printf("%d\n",*(p+3));
    printf("Adress of ptr will be :%d\n",p+3);*/
 
}