#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter the value of first variable");
    scanf("%d", &a);
    printf("enter tha value of seconf variable");
    scanf("%d", &b);
    if (a>=b)
    {
        printf("%d", a);
    }else{
        printf("%d", b);
    }
    
return 0;
}