#include<stdio.h>
int main(){
    int  a,b;
    printf("enter two value");
    scanf("%d%d",&a,&b);
    if(a>b&&a>=500&&a<=1000){
        printf("%d", a);
    }else if(b>a&&b>=500&&b<=1000){
        printf("%d", b);
    }else{
        printf("error");
    }
return 0;
}