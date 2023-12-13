#include<stdio.h>
int main(){
    int n;
    printf("Enetr the number : ");
    scanf("%d" , &n);
    int row = 1 ;
    while(row <= n){
    int col = 1;
    while(col <= row){
        printf("%d" , row);
        col++;
    }
    printf("\n");
    row++;
    }
    return 0;

}