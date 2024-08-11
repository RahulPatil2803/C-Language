// Convert the time entered in hr , min and sec into seconds.

#include<stdio.h>
void main(){
    int hr=5;
    int min=46;
    int sec=30;
    int total_sec;

    total_sec=(hr*3600)+(min*60)+sec;
    printf("Total Second will be :%d",total_sec);
}