#include<stdio.h>
int main(){
    float temp;
    printf("enter temprature in farehneight");
    scanf("%f", &temp);
    temp=((temp-32)*5)/9;
    printf("%f", temp);
    return 0;
}