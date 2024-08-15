//5. Calculating total salary based on basic. If basic <=5000 da,ta and hra will be 10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.

#include<stdio.h>
void main(){
    int basic_sal=7000;
    float total_sal,da,ta,hra;


    if(basic_sal<=5000){
        da=(basic_sal*10)/100;
        ta=(basic_sal*20)/100;
        hra=(basic_sal*25)/100;
    }
    else{
        da=(basic_sal*15)/100;
        ta=(basic_sal*25)/100;
        hra=(basic_sal*30)/100;
    }

    total_sal=da+ta+hra;
    printf("Salary Will be %f",total_sal);

    
}