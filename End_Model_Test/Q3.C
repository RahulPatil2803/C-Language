#include<stdio.h>
#include<string.h>

typedef struct product{
	char name[10];
	int id;
	double price;
}product;


int main()
{
	int discount ,GST;
	int n;
	printf("How many product you add :");
	scanf("%d",&n);

	product arr[10];

	for(int i=0;i<n;i++)
	{
		printf("\nProduct");

		printf("\nEnter id:");
		scanf("%d",&arr[i].id);

		printf("Enter Name:");
		scanf("%s",arr[i].name);

		printf("Enter price:");
		scanf("%lf",&arr[i].price);
	}


for(int i=0;i<n;i++){


	if(arr[i].price>500)
	{
		discount=arr[i].price-((arr->price*20)/100);
		printf("\nTotal discount on price will be :%d\n",discount);
	}
	else if(arr[i].price<500)
	{
		discount=arr[i].price-((arr->price*5)/100);
		printf("\nTotal discount on price will be :%d\n",discount);
	}
	else
	{
		printf("no op");
	}

}

//display 
  for(int i=0;i<n;i++)
	{ 
		printf("\n\nDisplay details of product %d",i+1);
		printf("\n%d",arr[i].id);
		printf("\n%s",arr[i].name);
		printf("\n%lf",arr[i].price);

		printf("\nGST should be :");
		GST=arr[i].price+(discount*18)/100;     // GST should be added in base or original value .
		printf("\nTotal Price after deducting GST :%d",GST);    // Display the value with including GST .


	}

	return 0;
}
