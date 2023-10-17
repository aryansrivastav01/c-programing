#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);

    for(int i=a; i>=1; i--){
        if(i%2==0){
            printf("%d ",i);
        }
    }
return 0;
}