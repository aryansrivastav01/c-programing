#include<stdio.h>
int main(){
    int a;
    printf("enter the value");
    scanf("%d",&a);
    if(a%3==0&&a%7==0){
        printf("the number id divisible by both 3 and 7");
    }else if(a%3==0){
        printf("yhe number is divisinle by 3");
    }else if(a%7==0){
        printf("the number is divisible by 7");
    }else{
        printf("the number is not divisible by 3 and 7");
    }
return 0;
}