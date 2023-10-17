#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the num of first subject");
    scanf("%d",&a);
    printf("enter the num of second subject");
    scanf("%d",&b);
    printf("enter the num of third subject");
    scanf("%d",&c);
    printf("enter the num of forth subject");
    scanf("%d",&d);
    printf("enter the num of fifth subject");
    scanf("%d",&e);
    if(a>33&&b>33&&c>33&&d>33&&e>33){
        printf("you are pass");
    }else{
        printf("you are fail");
    }
return 0;
}