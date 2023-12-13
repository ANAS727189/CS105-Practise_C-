#include<stdio.h>
int main(){
    int a;
    printf("Enter a number to check : ");
    scanf("%d" , &a);
    if(a>0){
        printf("Number is positive");
    }
    if(a=0){
        printf("Number is Zero");
    }
    else{
        printf("Number is negative");
    }
}