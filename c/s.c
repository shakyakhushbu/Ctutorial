#include <stdio.h> 
 
 int main() { 
   int num; 
   float sum=0, num1, num2; 
   
   printf("\n Enter the value of number: "); 
   scanf ("%d", &num); 
   for(num2=1;num2<=num;num2++) { 
      num1=1/num2; 
      sum = sum +num1; 
    } 
    printf("\n The sum of series 1/1 + 1/2 +... + 1/%d = %f",num,sum); 
    return 0; 
 }