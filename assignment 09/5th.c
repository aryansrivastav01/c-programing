#include<stdio.h>
int main(){
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%100!=0&&year%4==0||year%400==0){
        printf("year is leap year");
    }else{
        printf("year is not leap year");
    }
return 0;
}

// int main()
// {
//  leapyear();


// }
// void leapyear()
// {
//     printf//enter year
//     scanf

    
// }