#include<stdio.h>
int main()
{
    float p,r,t;
    float SI;
    printf("Enter the value of principle:");
    scanf("%f",&p);
    printf("Enter the value of rate:");
    scanf("%f",&r);
    printf("Enter the value of time:");
    scanf("%f",&t);
    SI=(p*r*t)/100;
    printf("Simple intrest is :%f",SI);
}