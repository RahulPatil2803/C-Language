#include<stdio.h>
void main(){
  int a=9;
  int b=8;


  int c=printf("%d",++a)+printf("%d",b++);
  int d=printf("\n%d is answer",c);
  printf("\n%d",d);
  
}