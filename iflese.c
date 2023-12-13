#include<stdio.h>
int main(){
    int a , b;
    printf("Enter two numbers : ");
    scanf("%d%d" , &a , &b);
    if(a==b){
        printf("Both the numbers are equal");
    }
    else{
        printf("Not equal");
    }
    return 0;
}