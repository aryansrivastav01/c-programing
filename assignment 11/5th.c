#include<stdio.h>
int main(){
    int a;
    int n,m,result;
    printf("enter a value");
    scanf("%d",&a);

    for(int i=1; i<=a; i++){
        printf("enter two value\n");
        scanf("%d%d",&m,&n);
        result=m+n;
        printf("the sum of two value are %d\n",result);
    }
return 0;
}