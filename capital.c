#include<stdio.h>
#include<ctype.h>
int main(){
    char s[1000];
    printf("Enter a sentence : ");
    scanf("%[^\n]" , s);
    int i = 0 , c = 0;
    while(s[i] != '\0'){
        if(s[i] != ' '){
           s[i] = toupper(s[i]);
        }
        i++;
    }
    printf("Sentence in capital letters is = %s" , s);
    return 0;
}