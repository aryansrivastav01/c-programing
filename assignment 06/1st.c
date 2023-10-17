#include<stdio.h>
int a,b,c,result;


void area(){
             printf("enter the sides of rectangle\n");
             scanf("%d%d",&a,&b);
             result=a*b;
             printf("the area of rectangle is %d",result);
}

void perimeter(){
             printf("enter the sides of rectanglr\n");
             scanf("%d%d",&a,&b);
             result=(a+b)*2;
             printf("the perimeter if rectangle is %d",result);
}

void sq_area(){
             printf("enter the sides of square\n");
             scanf("%d",&a);
             result=a*a;
             printf("the area of square is %d",result);

}

void sq_perimeter(){
             printf("enter the sides of square\n");
             scanf("%d",&a);
             result=4*a;
             printf("the perimeter if square is %d",result);
}

void circumference(){
             printf("enter the radius of circle");
             scanf("%d",&a);
             result=2*3.14*a;
             printf("the circumferense of cirlcle is %d", result);
}

void sum_triangle_sides(){
             printf("enter the sides of triangle");
             scanf("%d%d%d",&a,&b,&c);
             result=a+b+c;
             printf("the sum of sides are %d", result);
}
        
int main(){
    char choice;
                 printf("1-area of rectangle\n 2-perimeter of rectangle\n 3-area of square\n 4-perimeter of square\n 5-calculate circumferece of a circle\n 6-sum of sides of square\n");
                  printf("enter the num of opration want to perform");
                  scanf("%c",&choice);

    switch(choice){
        case '1': printf("area of rectangle\n");
                  area();break;

        case '2': printf("perimeter of rectangle\n");
                  perimeter();break;

        case '3': printf("area of square\n");
                  sq_area();break;     

        case '4': printf("perimeter of square\n");
                  sq_perimeter();break;

        case '5': printf("circumference of a circle\n");
                  circumference();break;

        case '6': printf("sum of sides of triangle\n"); 
                  sum_triangle_sides();break;   

        default: printf("wrong opration");break;                                     
    }        
            
    
return 0;
}
