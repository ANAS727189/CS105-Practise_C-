#include<stdio.h>
int main(){
    int a[1000] , n ,i=0;
    printf("enter number to convert : ");
    scanf("%d" , &n);
    for( i = 0 ; n>0 ; i++){
        a[i] = n % 2;
        n = n / 2;

    }
    printf("\n Binary equivalent of number  is : ");
    for(int j = i-1 ; j >= 0 ; j--){
        printf("%d" , a[j]);
    }
    return 0;
}