//Convert the time entred in hh min and sec

#include<stdio.h>
void main(){
    int hr,min,sec;
    printf("Enter hr:");
    scanf("%d",&hr);

     printf("Enter Min:");
    scanf("%d",&min);

     printf("Enter sec:");
    scanf("%d",&sec);
 

    float Total_sec=(hr*3600)+(min*60)+sec;
    printf("Total sec is %f",Total_sec);
}
