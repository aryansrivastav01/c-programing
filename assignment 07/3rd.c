#include<stdio.h>
int main(){
    int a;
    printf("enter a value between 0-100");
    scanf("%d",&a);
    if(a>=50&&a<=100){
        printf("sucess");
    }else{
        printf("fail");
    }
return 0;
}