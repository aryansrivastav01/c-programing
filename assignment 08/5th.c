#include<stdio.h>
int main(){
    float a;
    printf("enter a value ");
    scanf("%f",&a);
    if(a>0){
        printf("the number is positive");
    }else if(a<0){
        printf("the number is nagative");
    }else if(a==0){
        printf("the number is zero");
    }
return 0;
}