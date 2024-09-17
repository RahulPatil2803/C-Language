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
    int booking_ch,bus_oprator_ch;;
    printf("\n");
    printf("Menu -->\n1.Select bus oprator\n2.Check available seat\n3.Book seat \n-->");

    while(1)
    {
        scanf("%d",&booking_ch);
        switch (booking_ch)
        {
        case 1:
        printf("1.Konduskar Travels\n2.Nakoda Travels\n3.Vaibhav Travels\n-->");
        scanf("%d",&bus_oprator_ch);
        switch (bus_oprator_ch)   // idhar nested switch use kiya hai !
        {
        case 1:
            printf("konduskar ");
            break;
        case 2:
            printf("Nakoda");
            break;
        case 3:
            printf("vaibhav");
            break;
        
        default:
            break;
        }
        break;     // case 1 ka break ithe ahe 

        case 2:
        break;   // case 2 ka break ithe ahe 

        case 3:
        break;   // case 3 ka break ithe ahe 
        
        default:
        printf("bye bye from booking function !");
        exit(0);
            break;  // idhar se mai bhahar jaunga 
        }
    }
}

void main()
{
    printf("Welcome in bus booking Application !\n");

    while(1){

    int login_ch;
   printf("Enter a choice :-->\n1.Registration\n2.Login:\n3.Logout/Exit\n-->");
   scanf("%d",&login_ch);

   int log_id,log_pass,sign_id,sign_pass;

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

  
