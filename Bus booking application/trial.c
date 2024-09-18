#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void booking();

void  booking()
{

    int booking_ch,bus_oprator_ch,size,seat_book_ch;
    int arr_konduskar[5], arr_nakoda[10],arr_vaibhav[20];
    int i=0;
	int count=0;

    printf("\n");
    printf("Menu -->\nSelect bus oprator :\n");
    printf("1.Konduskar Travels\n2.Nakoda Travels\n3.Vaibhav Travels\n3.Exit\n-->");
    scanf("%d",&bus_oprator_ch);
    switch (bus_oprator_ch)
    {
    case 1:    // ithe konduskar travels
        printf("Welcome in Raskika konduskar bus servic !\n");
        while(1){
        printf("1.Check available seat\n2.Book Seat\n3.Exit:\n-->");
        scanf("%d",&booking_ch);
		//int count=0;
		//while(1){
        switch (booking_ch)
        {
        case 1:
		 count=0;
        for ( i=0;i<5;i++){
            if(arr_konduskar[i]==0)
            {
               // printf(" why its not print %d\n",i);
            }
            count++;
        }
        printf("Available Seat will be :%d\n",count);

            break;
        case 2:
        //printf("\nbook kar lee\n");
		for( i=1;i<=count;i++)
		{
			printf("%d\t\n",i);
		}
		printf("How many seat you want to book :");
		scanf("%d",&seat_book_ch);

		for( i=0;i<=(seat_book_ch-1);i++)
		{
			arr_konduskar[i]=1;
		}		
            break;
        case 3:
            break;
        default:
            break;
        }
	//	}
        }
        break;
    case 2:  //ithe nakoda travels
        printf("Welcome in Nakoda Travels bus service !\n");
        printf("1.Check available seat\n2.Book Seat :\n-->");
        scanf("%d",&booking_ch);
        switch (booking_ch)
        {
        case 1:
        for (int i=0;i<5;i++){
            if(arr_nakoda[i]==0)
            {
                //
            }
            count++;
        }
        printf("Available Seat will be :%d\n",count);
            break;
        case 2:
        printf("book kar lee\n");
            break;
        default:
            break;
        }
        break;
    case 3:  // ithe vaibhav travels
        printf("Welcome in Vaibhav Travels bus service !\n");
        printf("1.Check available seat\n2.Book Seat :\n-->");
        scanf("%d",&booking_ch);
        switch (booking_ch)
        {
        case 1:
        for (int i=0;i<5;i++){
            if(arr_vaibhav[i]==0)
            {
                //
            }
            count++;
        }
        printf("Available Seat will be :%d\n",count);
            break;
        case 2:
        printf("book kar lee\n");
            break;
        default:
            break;
        }
        break; 
    case 4:
        exit(0);  
        //goto label;
    
    default:
        break;
    }
}


void main()
{
	booking();
}