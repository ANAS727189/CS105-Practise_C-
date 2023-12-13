#include<stdio.h>

void sort(int arr[] , int n){
    int temp;
    for(int i = 0; i < n - 1 ; i ++){
        for(int j = 0; j < n-i-1 ; j++){
           if(arr[j] % 2 == 0){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        }
    }
    for(int i = 0; i <n; i ++){
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}


int main(){
    int n;
    int arr[1000];
    printf("Enter the number of terms : ");
    scanf("%d" , &n);
    for(int i = 0; i <n; i ++){
        scanf("%d" , &arr[i]);
    }
    printf("\n");
  sort(arr , n);
    return 0;
}