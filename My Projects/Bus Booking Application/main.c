#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int  Login_user();
int  Login_pass();

int Signup_user();
int Signup_pass();

void  booking();//ithe maza dashboard ahe 

int Login_user()// login chi id
{
    int user_name;
    printf("Enter a Username :");
    scanf("%d",&user_name);
    return user_name; 

}
int Login_pass()// login cha pass
{
    int passWord;
    printf("Enter a Password :");
    scanf("%d",&passWord);
    return passWord; 
}
int Signup_user()//registration id
{
    int sign_user;
    printf("create New Username :");
    scanf("%d",&sign_user);
    return sign_user;
}
int Signup_pass()// registration pass
{
    int sign_pass;
    printf("Create New Password :");
    scanf("%d",&sign_pass);
    return sign_pass;
}
void  booking()
{

    int booking_ch,bus_oprator_ch,size,seat_book_ch,payment_ch,payment;
    int arr_konduskar[5]={0}, arr_nakoda[10]={0},arr_vaibhav[20]={0};
    int i=0;
	int count=0;

    printf("\n");
    printf("Menu -->\nSelect bus oprator :\n");
    printf("1.Konduskar Travels\n2.Nakoda Travels\n3.Vaibhav Travels\n4.Exit\n-->");
    scanf("%d",&bus_oprator_ch);
    switch (bus_oprator_ch)
    {

    case 1:    // ithe konduskar travels
        printf("Welcome in Raskika konduskar bus service !\n");
        while(1){
        printf("1.Check available seat\n2.Book Seat\n3.Exit:\n-->");
        scanf("%d",&booking_ch);
        switch (booking_ch)
        {
        case 1:
        for ( i=0;i<5;i++){
            if(arr_konduskar[i]==0)
            {
               printf("seat avaialable at %d number seat\n",i+1);
            }
            else
            {
                printf("Number %d seat is booked\n",i+1);
            }
            //count++;
        }
        count=0;
        for(i=0;i<5;i++){
            if(arr_konduskar[i]==0){
                count ++;
            }
        }
        printf("\nAvailable Seat will be :--> %d\n\n",count);
        break;
        case 2:
		printf("\nHow many seat you want to book :");
		scanf("%d",&seat_book_ch);

		for( i=0;i<=(seat_book_ch-1);i++)
		{
			arr_konduskar[i]=1;
		}	
        printf("\n1.Confirming your seat \n2.Exit\n--->");
        scanf("%d",&payment_ch);
            switch(payment_ch)
            {
                case 1:
                printf("You booked %d seat,",seat_book_ch);
                printf("amount payable is %d",(seat_book_ch*250));

                printf("\n\nThank You,Visit Again");
                case 2:
                break;
            }
            break;
        case 3:
       // exit(0);
            break;
        default:
            break;
        }
        }
        break;
    case 2:  //ithe nakoda travels
        printf("Welcome in Nakoda bus service !\n");
        while(1){
        printf("1.Check available seat\n2.Book Seat\n3.Exit:\n-->");
        scanf("%d",&booking_ch);
        switch (booking_ch)
        {
        case 1:
        for ( i=0;i<10;i++){
            if(arr_nakoda[i]==0)
            {
               printf("seat avaialable at %d number seat\n",i+1);
            }
            else
            {
                printf("Number %d seat is booked\n",i+1);
            }
        }
        count=0;
        for(i=0;i<10;i++){
            if(arr_nakoda[i]==0){
                count ++;
            }
        }
        printf("\nAvailable Seat will be :--> %d\n\n",count);
        break;

        case 2:
		printf("How many seat you want to book :");
		scanf("%d",&seat_book_ch);

		for( i=0;i<=(seat_book_ch-1);i++)
		{
			arr_nakoda[i]=1;
		}	
         printf("\n1.Confirming your seat \n2.Exit\n--->");
        scanf("%d",&payment_ch);
            switch(payment_ch)
            {
                case 1:
                printf("You booked %d seat,",seat_book_ch);
                printf("amount payable is %d",(seat_book_ch*250));

                printf("\n\nThank You,Visit Again");
                case 2:
                break;
            }	
            break;
        case 3:
            break;
        default:
            break;
        }
        }
        break;
    case 3:   // ithe vaibhav travels
        printf("Welcome in Vaibhav travels bus service !\n");
        while(1){
        printf("1.Check available seat\n2.Book Seat\n3.Exit:\n-->");
        scanf("%d",&booking_ch);
        switch (booking_ch)
        {
        case 1:
        for ( i=0;i<20;i++){
            if(arr_vaibhav[i]==0)
            {
               printf("seat avaialable at %d number seat\n",i+1);
            }
            else
            {
                printf("Number %d seat is booked\n",i+1);
            }
            //count++;
        }
        count=0;
        for(i=0;i<20;i++){
            if(arr_vaibhav[i]==0){
                count ++;
            }
        }
        printf("\nAvailable Seat will be :--> %d\n\n",count);
        break;
        case 2:
		printf("How many seat you want to book :");
		scanf("%d",&seat_book_ch);

		for( i=0;i<=(seat_book_ch-1);i++)
		{
			arr_vaibhav[i]=1;
		}	
         printf("\n1.Confirming your seat \n2.Exit\n--->");
        scanf("%d",&payment_ch);
            switch(payment_ch)
            {
                case 1:
                printf("You booked %d seat,",seat_book_ch);
                printf("amount payable is %d",(seat_book_ch*250));

                printf("\n\nThank You,Visit Again");
                case 2:
                break;
            }	
            break;
        case 3:
        exit(0);
            break;
        default:
            break;
        }
        }
        break;

    case 4:
    break;
        //exit(0);  
    default:
        break;
    }
}
void main()
{
    printf("Welcome in bus booking Appcation !\n");

    while(1){

    int login_ch;
   printf("Enter a choice :\n1.Registration\n2.Login:\n3.Logout/Exit\n-->");
   scanf("%d",&login_ch);

   int log_id,log_pass,sign_id,sign_pass;
//    label:
//    booking(); // idhar goto use karta hu mai
   switch (login_ch)
   {
   case 1:
     sign_id=Signup_user();
     sign_pass=Signup_pass();
    printf("Login id and password sucessfully created !\n\n");
    break;


    case 2:
      log_id=Login_user();
      log_pass=Login_pass();
     if((log_id==sign_id&&log_pass==sign_pass)||(log_id==123&&log_pass==9545))
     {
        booking();//im here
     }
     else
     {
        printf("Bhai wrong Id / Password mat dal !\n");
     }
     break;


     case 3:
     printf("Bhai tune logout kr diya .... chal bye bye !");
     exit(0);
    default:
        printf("Bhai please registration kr leee !\n");
    break;
     
   }
}
}

  
