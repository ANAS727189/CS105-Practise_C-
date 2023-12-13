#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
    int a[7] ={1,2,3,4,5,6,7};
    int*p,*q ;
    p=a;
    printf("%d %d %d \n",(*p)++,(*p)++,*++p);
    printf("%d \n",*p);
    printf("%d \n",*p++);
    printf("%d \n",*p++);

    return 0;
}