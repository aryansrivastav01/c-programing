#include<stdio.h>
int main(){
    int a;
    int b;
    float profit,loss;
    float profit_percentage,loss_percentage;
    printf("enter the cost price of product");
    scanf("%d",&a);
    printf("enter the selling price of product");
    scanf("%d",&b);
    profit=b-a;
    profit_percentage=(profit/a)*100;
    loss=a-b;
    loss_percentage=(loss/a)*100;
    if(a>b){
        printf("loss percentage is %f", loss_percentage);
    }else {
        printf("profit percentage %f", profit_percentage);
    }

    return 0;
}