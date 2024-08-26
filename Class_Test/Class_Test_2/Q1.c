// calculate electricuty bill For 1-5o unit :30rs/unit..... 2.51-150unit :40 ......above 151 :50rs
#include<stdio.h>
void main(){
    double unit,res;
    
    printf("Unit :");
    scanf("%d",&unit);

    if(unit>=1||unit<=50)
    {
        res=(unit*30);
    }
    else if(unit>=51||unit<=150)
    {
        res=(unit*40);
    }

    else if(unit>=151)
    {
        res=(unit*50);
    }
    else{
        printf("Wrong choice");
    }
    printf("Bill will be : %d",res);

}