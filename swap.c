#include<stdio.h>
int a = 10 ; int b = 5;
int main(){
   int c = a;
   a=b;
   b=c;
   printf("%d%d" , a , b);
   return 0;
}