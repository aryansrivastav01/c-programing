#include<stdio.h>
    float a,result;
    char choice;

    void centimeter(){
        printf("enter the distance in kms");
        scanf("%f",&a);
        result=a*100000;
        printf("%f", result);

}

void milimeter(){
    printf("enter te distance in kms");
    scanf("%f",&a);
    result=a*1000000;
    printf("%f", result);
}

void inches(){
    printf("enter the distance in kms");
    scanf("%f",&a);
    result=a*39370.08;
    printf("%f", result);
}

int main(){

    printf("enter the opration you want to perform");
    scanf("%c",&choice);
    switch(choice){
         case '1':
                   centimeter();break;

         case '2': 
                   milimeter();break;

         case '3': 
                   inches();break;

                                     
    }

return 0;
}