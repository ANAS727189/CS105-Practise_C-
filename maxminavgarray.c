#include<stdio.h>
 void avg(int arr[] , int n){
    int sum = 0 , avg = 0;
for(int i = 0;i<n;i++){
sum += arr[i];
}
avg = sum /n;
printf("\nAverage of elements in array is : %d" , avg);
}
void min(int arr[] , int n){
 int min = arr[0];
    for(int i = 1 ; i<n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("\nMinimum element in array is : %d" , min);
}
void max(int arr[] , int n){
    int max = arr[0];
    for(int i = 1 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("\nMaximum element in array is : %d" , max);
}


int main(){
    int n;
    int arr[1000];
    printf("Enter number of elements : ");
    scanf("%d" , &n);
    for(int i = 0; i <n ; i++){
        scanf("%d" , &arr[i]);
    }printf("\n");
    max(arr , n);
    min(arr , n);
    avg(arr , n);
    return 0;
}