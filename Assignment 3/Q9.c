// Check the given number is palindrome or not
#include<stdio.h>
void main(){
    int n,rem,org,rev=0;


    printf("Enter Number :");
    scanf("%d",&n);
    org=n;

    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
         }
    if(org==rev)
    printf("%d is Palindrome !",org);
    else
    printf("%d not Palindrome",org);
}