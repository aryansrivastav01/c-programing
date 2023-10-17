#include<stdio.h>
int a,b,result;
char choice;
void add(){
    printf("enter two number\n");
    scanf("%d%d", &a,&b);
    result=a+b;
    printf("%d", result);
}

void sub(){
    printf("enter two number\n");
    scanf("%d%d", &a,&b);
    result=a-b;
    printf("%d",result);
}

void multiply(){
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    result=a*b;
    printf("%d", result);
}

void divide(){
    printf("enger two number\n");
    scanf("%d%d", &a,&b);
    result=a/b;
    printf("%d", result);
}


int main(){
    printf("enter the opration you want to perform");
    scanf("%c", &choice);
    switch(choice){
        case '1': printf("addition of two number");
                add(); break;

        case '2': printf("subtraction of two number");
                sub(); break;      

        case '3': printf("multiplication of two number");
                   multiply();break;

        case '4': printf("divide of two number");
                divide(); break;

        default: printf("wrong opration");                        
    }
return 0;
}