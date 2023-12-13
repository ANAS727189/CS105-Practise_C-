#include<stdio.h>
int main(){
    int l , u;
    printf("Enter the lower and upper limit to print odd and even numbers in range : ");
    scanf("%d%d" , &l, &u);
     int i = l;
     int k=0 , p=0;
     int arr[1000]={0};
     int brr[1000]={0};
     do{
        if(i%2 != 0){
           arr[k] = i;
           k++;
        }
        else{
           brr[p]=i;
           p++;
        }
        i++;
      } while(i<=u);

      printf("Odd elements are :");
      for(int j = 0; j<k;j++){
        printf("%d\t" , arr[j]);
      }
      printf("\n");
      printf("Even elements are :");
       for(int h = 0; h<p;h++){
        printf("%d\t" , brr[h]);
      }
      
     return 0;
}