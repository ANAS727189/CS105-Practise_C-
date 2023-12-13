#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers you have to calculte sum :  ");
    scanf("%d" , &n);
    int sum = 0;
    int a;
   for(int i = 1; i <= n; i++){

        printf("Enter %d  elements :" , i);
        scanf("%d" , &a);
        sum = (sum + a);
    }
     printf("Sum of number is : %d \n" , sum);
    return 0;
}