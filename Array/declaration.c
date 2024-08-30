// Basic declaration of array .
#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,4,5};


    printf("value will be %d, which are retived from array 'arr'\n",arr[0]);
     printf("value will be %d, which are retived from array 'arr'\n",arr[1]);
      printf("value will be %d, which are retived from array 'arr'\n",arr[2]);
       printf("value will be %d, which are retived from array 'arr'\n",arr[3]);
        printf("value will be %d, which are retived from array 'arr'\n",arr[4]);
        printf("---------------------------------------------------\n");


        for(int i=0;i<5;i++){
             printf("value will be %d, which are retived from array 'arr'\n",arr[i]);
        }
}