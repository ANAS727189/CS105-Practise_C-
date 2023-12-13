#include<stdio.h>
#include<math.h>
int main(){
    int n , s = 0;
    printf("Enter the number of terms : ");
    scanf("%d" , &n);
    for(int i = 1 ; i<=n ; i++){
        s = s + (pow(2 , i));
    }
    printf("Sum of series is %d" , s);
    return 0;
}