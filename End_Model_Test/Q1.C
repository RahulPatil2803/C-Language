#include<stdio.h>
int main()
{

	int n,reverse=0,rem=0;
	printf("Enter Number :");
	scanf("%d",&n);

	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}

	printf("\nReversed output :%d",reverse);
	return 0;
}