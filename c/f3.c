#include<stdio.h>
void show(int);
void display(int,float);
int main(){
    show(10);
    display(100,22.5);
    //show(a);
    //display(a,b);
}
void show(int x){
    printf("Value of x:%d\n",x);
}
void display(int x,float z){
    printf("x=%d\t z=%3f\n",x,z );
}
