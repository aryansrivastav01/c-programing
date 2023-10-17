#include<stdio.h>
int main(){
    int a;
    printf("enter a valu of variable");
    scanf("%d",&a);
    if(a>0){
        printf("it is a positive number\n");
        if(a%10==0){
            printf("the number is divisible by 10\n");
        }else {
            printf("the number is not divisible by 10\n");
        }
    }else{
        printf("it is a negative number\n");
    }
return 0;
}