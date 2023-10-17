#include<stdio.h>
int main(){
    int a;
    printf("enter the num of day");
    scanf("%d",&a);
    if(a==1){
        printf("sunday");
    }else if(a==2){
        printf("monday");
    }else if(a==3){
        printf("tuesday");
    }else if(a==4){
        printf("wednesday");
    }else if(a==5){
        printf("thrusday");
    }else if(a==6){
        printf("friday");
    }else if(a==7){
        printf("saturday");
    }else if(a>7){
        printf("are u serious");
    }
return 0;
}