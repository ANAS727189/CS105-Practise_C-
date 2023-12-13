#include<stdio.h>
int main(){
    int n;
    printf("Enter the amount of numbers to find their avg : ");
    scanf("%d" , &n);
int a ; double s = 0.0;
double avg = 0.0;
int i = 0;
    while(i<n){
        printf("Enter %d number : " , i + 1);
        scanf("%d" , &a);
        s +=  (double)a;
        i++;
    }
    avg = (s/n);
printf("Avg is %lf : " , avg);
    return 0;
}