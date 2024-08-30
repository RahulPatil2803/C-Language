// Input valure for array from user.
#include<stdio.h>
void main()
{
    int i;
    int arr[5];


    for ( i = 0; i < 5; i++)
    {
        scanf("%d\n",arr[i]);
    }

     for(i=0;i<5;i++)
     {
             printf("value will be %d, which are retived from array 'arr'\n",arr[i]);
        }
    
}