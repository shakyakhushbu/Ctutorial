#include<stdio.h>
int main()
{
    int bs;
    float TA,PF,DA,gs,ns;
    printf("Enter basic salary\n");
    scanf("%d",&bs);
    TA=(10*bs)/100;
    printf("Travel allowance is:%f\n",TA);
    PF=(7.8*bs)/100;
    printf("Provident fund is:%f\n",PF);
    DA =500;
    printf("Dearness allowance is:%f\n",DA);
    gs=bs+DA+TA;
    printf("Gross salary is:%f\n",gs);
    ns = gs-PF;
    printf("Net salary  is:%f\n",ns);



}