#include<stdio.h>
int main(){
    char s[1000];
    printf("Enter a sentence : ");
    scanf("%[^\n]" , s);
    int i = 0;
   int len = strlen(s);
    printf("LENGTH IS %d" , len);
    return 0;
}
