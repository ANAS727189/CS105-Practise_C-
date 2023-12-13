#include<stdio.h>
int main(){
    char s[1000];
    printf("Enter a sentence : ");
    scanf("%[^\n]" , s);
    int i = 0 , c = 0;
    while(s[i] != '\0'){
        if(s[i] != ' '){
            c++;
        }
        i++;
    }
    printf("LENGTH IS %d" , c);
    return 0;
}
