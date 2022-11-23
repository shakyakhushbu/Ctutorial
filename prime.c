#include<stdio.h>
int main(){
   int i, num, n, c;
   printf("Enter the range: \n");
   scanf("%d", &n);
   printf("The prime numbers in between the range 1 to %d:",n);
   for(num = 1;num<=n;num++){
      c = 0;
      for(i=2;i<=num/2;i++){
         if(num%i==0){
            c++;
         break;
      }
   }
   if(c==0) {
      printf("%d ",num);
   }
   else{
       printf("");
   }
}
}