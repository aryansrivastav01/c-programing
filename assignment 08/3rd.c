#include<stdio.h>
int main(){
    int a;
    printf("enter a value ");
    scanf("%d",&a);
    if(a%2==0&&a%3==0){
        printf("it is divisible by both 2 and 3\n");
    }else if(a%2==0){
        printf("it is divisible by 2\n");
    }else if(a%3==0){
        printf("it is divisible by 3\n");
    }else{
        printf("not disible by both 2 and 3");
    }
return 0;
}