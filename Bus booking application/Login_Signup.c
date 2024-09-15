#include<stdio.h>
#include<string.h>

int  Login_user();
int  Login_pass();

int Signup_user();
int Signup_pass();

void  booking();

int Login_user()
{
    int user_name;
    printf("Enter Username (Only Number):");
    scanf("%d",&user_name);
    return user_name;

}
int Login_pass()
{
    int passWord;
    printf("\nEnter Password (Only char):");
    scanf("%d",&passWord);
    return passWord;
}
int Signup_user()
{
    int sign_user;
    printf("create Username (Only Number):");
    scanf("%d",&sign_user);
    return sign_user;
}
int Signup_pass()
{
    int sign_pass;
    printf("Create Password (Only char):");
    scanf("%d",&sign_pass);
    return sign_pass;
}
void  booking()
{
    printf("Im in Booking function !");
}

void main()
{
   int login_ch;
   printf("Welcome !\nEnter a choice :\n1.Registration\n2.Login:");
   scanf("%d",&login_ch);

   if(login_ch==1)
   {
    int sign_id=Signup_user();
    int sign_pass=Signup_pass();
    printf("Login id and password sucessfully created !\n");
    int log_id=Login_user();
    int log_pass=Login_pass();
         if((sign_id==log_id)&&(sign_pass==log_pass))
         {
            booking();//im here 
         }
         else
         {
            printf("Incorrect credentials details !");
         }

   }
   else if(login_ch==2)
   {

     int log_id=Login_user();
     int log_pass=Login_pass();

     printf("%d\n",log_id);
     printf("%d",log_pass);
     
   }
   else
   {
    printf("Invalod choice");
   }



}