#include<stdio.h>
void toh(int n , char src , char dest , char aux){
    if(n==1){
        printf("\nMove disc %d from %c to %c " , n , src , dest);
    }
        else{
            toh(n - 1 , src , aux , dest);
            printf("\nMove disc %d from %c to %c " , n , src , dest);
            toh(n-1 , aux , dest , src);
        }
    }

int main(){
    char src = 'S' , dest = 'D' , aux = 'T';
    int n;
    printf("Enter no. of disc ");
    scanf("%d" , &n);
    toh(n , src ,dest , aux);
    return 0;
}