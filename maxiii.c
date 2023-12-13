#include<stdio.h>
int maxii(int arr[] , int n);
int main(){
    int arr[1000];
    int n;
    scanf("%d" , &n);
    for(int i = 0; i <n ; i++){
        scanf("%d" , &arr[i]);
    }
    int index = maxii(arr , n);
    printf("\t Maximum element's index is %d" , index);
    return 0;
}

int maxii(int arr[] , int n){
    int max = -1111111;
    int index = -1;
    for(int i = 0 ; i<n ; i++){
        if(max < arr[i]){
              max = arr[i];
              index = i;
        }
    }
    printf("The maximum element is %d" , max);
    return index;
}