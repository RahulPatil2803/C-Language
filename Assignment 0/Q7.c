// Find total length of wire required for n fences around rectangular box horizontally

#include<stdio.h>
void main(){
    int len=5;
    int wed=10;
    int no_of_wires=5;

    int parameter=2*(len+wed);
    int total_wire=parameter*no_of_wires;

    printf("Wire Required :%d",total_wire);
}