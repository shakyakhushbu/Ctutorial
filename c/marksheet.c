#include<stdio.h>
int main()
{
    int p,c,m,total;
    float per;
    printf("Enter the marks for Physics\n");
    scanf("%d",&p);
    printf("Enter the marks for chemistry\n");
    scanf("%d",&c);
    printf("Enter the marks for Maths\n");
    scanf("%d",&m);
    if(p<33){
        if(c<33){
            if(m<33){
                printf("Fail in all subjects");
            }
            else{
                printf("Fail in Physics and chemistry");
            }
        }
    
        else{
            if(m<33){
                printf("Fail in Physics and Maths");
            }
            else{
                printf("Supplimentry in physics");
            }
        }
    }
        else if(c<33){
                if(m<33){
                    printf("Fail in chemistry and Maths");
                }
                else{
                    printf("Supplimentryv in chemistry");
                }
            
            

            }
            else{
                if(m<33){
                    printf("Supplimentry in Maths");
                }
                else{
                    printf("Pass in all subject");
                    total=p+c+m;
                    printf("Total is:%d\n",total);
                    per=(total/300)*100;
                    printf("Percentage is:%f\n",per);
                    if(per>33&&per<45){
                        printf("Pass in C grade");
                    }
                    else if(per>45&&per<60){
                        printf("Pass in B grade");
                    }
                    else if(per>60 && per < 75){
                        printf("Pass in A grade");
                    }
                    else{
                        printf("Pass in A++ gradde");
                    }

                }
            
            }
    }

        


      