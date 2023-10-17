#include<stdio.h>
int main(){
    int a,b,c;
    
    printf("enter a number of minimun two digit");
    scanf("%d",&a);
    b=a%10;
    c=a%100;
    printf("the number at 1 st place is %d\n", b);
    printf("the number at 10 st place is %d\n", c);

return 0;
}