#include<stdio.h>
int main(){
    int y;
    printf("Enter a year to check : ");
    scanf("%d" , &y);
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
        printf("The year entered is a leap year");
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}