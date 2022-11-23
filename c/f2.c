#include<stdio.h>
void add();
int main(){
    add();

}
void add(){
    int x,y,z;
    printf("Enter the value of x and y\n");
    scanf("%d%d\n",&x,&y);
    z = x+y;
    printf("Addition is :%d",z);
}