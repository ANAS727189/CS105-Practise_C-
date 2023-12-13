#include<stdio.h>
int factorial(int n){
    int fact = 1 , sum = 0;
    for(int i =1;i<=n;i++){
        fact = fact*i;
        sum += fact;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d" , &n);
    printf("the factorial sum till the given number is %d " , factorial(n));
    return 0;
}