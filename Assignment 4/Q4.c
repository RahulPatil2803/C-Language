//4. check strong number in the given range 1 to n?

#include<stdio.h>
void main()
{
 int i, j, cur, lastDigit, end;
 long long fact, sum;
 printf("Enter a value: ");
 scanf("%d", &end);
 printf("All Strong numbers between 1 to %d are:\n", end);
 for(i=1; i<=end; i++)
 {
 cur = i;
 sum = 0;
 while(cur > 0)
 {
 fact = 1;
 lastDigit = cur % 10;
 for( j=1; j<=lastDigit; j++)
 {
 fact = fact * j;
 }
 sum += fact; 
 cur /= 10;
 }
 if(sum == i)
 {
 printf("%d, ", i);
 }
 }
}
