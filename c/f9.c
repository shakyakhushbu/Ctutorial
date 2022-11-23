#include<stdio.h>
void sum(int,int,int,int,int);
int main(){
    int a,b,c,d,e;
    printf("Enter a\n");
    scanf("%d",&a);
    printf("Enter b\n");
    scanf("%d",&b);
    printf("Enter c\n");
    scanf("%d",&c);
    printf("Enter d\n");
    scanf("%d",&d);
    printf("Enter e\n");
    scanf("%d",&e);
    sum(a,b,c,d,e);
}
void sum(int x,int y,int z,int v,int w){
    float sum,ave;
    sum=x+y+z+v+w;
    ave=(sum/5);
    printf("The sum of the values are=%f\n",ave);

}