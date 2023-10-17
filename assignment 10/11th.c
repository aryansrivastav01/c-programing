#include<stdio.h>
int main(){
    int fhar;
    int celcious;
    printf("enter the temprature in farenhight\n");
    scanf("%d",&fhar);
    //celcious= 5/9 * (fhar-32);
    celcious= 5 * (fhar-32) /9;
    //celcious = 5.0/9 *(fhar-32);
    printf("the tempratue in celcious %d\n ", celcious);
return 0;
}