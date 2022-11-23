#include<stdio.h>
float area();
int main(){
    float res;
    res=area();
    printf("The area of square is=%f\n",res);
}
float area(){
    float a,c;
    printf("Enter a\n");
    scanf("%f",&a);
    
    c=a*a;
    return c;
}
