//9. Write a program to find the least common multiple (LCM) of two numbers.

#include<stdio.h>
int a,b,c,result;

void least_common_multiple(){
    printf("enter two num");
    scanf("%d %d", &a,&b);

    for(int i=1; i<=a&&i<=b; i++){
        if(a%i==0 && b%i==0) c=i;

    }
    result=(a*b)/c;
    printf("%d", result);
}
int main(){
    least_common_multiple();
return 0;
}

/*the output of this program is 
if we nter 12 & 15 then 
the lcm will be 60*/