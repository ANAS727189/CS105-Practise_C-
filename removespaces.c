#include<stdio.h>
#include<ctype.h>
int main(){
    char s[1000];
    printf("Enter a sentence : ");
    scanf(" %[^\n]" , s);
    char a[100];
    int i = 0 , c = 0;
    while(s[i] != '\0'){
        if(s[i] != ' '){
            a[c++] = s[i];
        }
        i++;
    }
    a[c] = '\0';
        printf("The changed sentence is = %s" , a);
    return 0;
}