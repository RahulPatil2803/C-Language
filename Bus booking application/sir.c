#include<stdio.h>


void main()
{
	int arr_konduskar[6];
	//arr_konduskar[3]==1;

	for(int i=0;i<6;i++)
	{
		arr_konduskar[i]=0;
	}
	arr_konduskar[3]=1;
	
	for(int i=0;i<6;i++)
	{
		//arr_konduskar[3]==1;
		if(arr_konduskar[i]==0)
		{
			
				printf("seat avaialable at %d\n",i);
			}
			else
			{
				printf("number %d seat is booked\n",i);
			}
			
		}

		
	}