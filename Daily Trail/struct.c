#include<stdio.h>
#include<string.h>
struct std
{
    int ID;
    char name[10];
    int marks;
};
struct Product
{
    int productId;
    char productName[20];
    int price;
    char mfgDate[30];
    char expDate[30];
};
void main()
{

    struct Product p1,p2,p3,p4;

   // printf("***** For Product 1 *****\n");
       printf("\n---------------------------\n");
    p1.productId=423;
    printf("Product ID :%d",p1.productId);

    strcpy(p1.productName,"Towel");
    printf("\nProduct name :%s",p1.productName);

    p1.price=200;
    printf("\nProduct Price :%d",p1.price);

    strcpy(p1.mfgDate,"01/02/2024");
    printf("\nMFG Date :%s",p1.mfgDate);

    strcpy(p1.expDate,"01/02/2024");
    printf("\nExp Date :%s",p1.expDate);
        printf("\n---------------------------\n");

   // printf("\n\n*****For Product 2*****\n");

    printf("Enter Product ID :");
    scanf("%d",&p2.productId);

    printf("Enter Product Name :");
    scanf("%s",p2.productName);

    printf("Enter Price :");
    scanf("%d",&p2.price);

    printf("Enter MFG date :");   
    scanf("%s",p2.mfgDate); 

    printf("Enter EXP date :");   
    scanf("%s",p2.expDate); 



    printf("\n----------------------------\n");
    printf("| Product ID :%d             |",p2.productId);
    printf("\n| Product name :%s         |",p2.productName);
    printf("\n| Product Price :%d        |",p2.price);
    printf("\n| Product MFG date :%s     |",p2.mfgDate);
    printf("\n| Product MFG date :%s     |",p2.expDate);
    printf("\n----------------------------\n");    


    // printf("\n\n*****For Product 3*****\n");

    printf("Enter Product ID :");
    scanf("%d",&p3.productId);

    printf("Enter Product Name :");
    scanf("%s",p3.productName);

    printf("Enter Price :");
    scanf("%d",&p3.price);

    printf("Enter MFG date :");   
    scanf("%s",p3.mfgDate); 

    printf("Enter EXP date :");   
    scanf("%s",p3.expDate); 



    printf("\n----------------------------\n");
    printf("| Product ID :%d             |",p3.productId);
    printf("\n| Product name :%s         |",p3.productName);
    printf("\n| Product Price :%d        |",p3.price);
    printf("\n| Product MFG date :%s     |",p3.mfgDate);
    printf("\n| Product MFG date :%s     |",p3.expDate);
    printf("\n----------------------------\n");    
    
    


    

    printf("\nDone !");
}  


