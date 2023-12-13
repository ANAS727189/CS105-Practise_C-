#include<stdio.h>
#include<string.h>
int count(char str[]  , char ch);
int main(){
    char str[1000] , ch;
    scanf("%[^\n]s" , str);
    scanf(" %c" , &ch);
    int c = count(str , ch);
    if(c >= 1){
     printf("character is present %d times" , c);
    }
    else{
        printf("character is not present");
    }
    return 0;
}

int count(char str[]  , char ch){
    int l = strlen(str);
    int c = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == ch){
          c++;
        }
    }
    return c;
}