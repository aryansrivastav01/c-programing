#include<stdio.h>
int main(){
    int a;
    printf("enter the num of month");
    scanf("%D",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        printf("the number of days are 31");
    }else if(a==4||a==6||a==9||a==11){
        printf("the number of days are 30");
    }else if(a==2){
        printf("the number of days are 28/29");
    }else{
        printf("bakchodi mt kr bro");
    }
return 0;
}