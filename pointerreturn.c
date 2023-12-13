#include<stdio.h>
int *pointer(int *a ){
    int temp;
    int n = 5;
    for(int i = 0; i <n-1 ; i++){
        for(int j = 0; j<n-i-1; j++){
            if(a[j] % 2 ==0){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
       
    }
    return a;
}
int main(){
    int n;
    scanf("%d" , &n);
   int arr[1000];
   for(int i = 0;i <n;i++){
    scanf("%d" , &arr[i]);
   }printf("\n");
 int *a = pointer(arr);
 for(int i = 0; i<n; i++){
    printf("%d" , a[i]);
 }
 return 0;


}