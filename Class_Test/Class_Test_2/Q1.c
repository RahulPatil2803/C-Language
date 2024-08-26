// calculate "Electricity Bill" For range (1-50 Unit for 30rs ),(51-150 Unit for 40rs ),(Above 151 Unit for 50rs ).
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
    printf("Electricity Bill will be : %d $",res);

}
