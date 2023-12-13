#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[1000] , a[1000];
    int i = 0,  c = 0;
    scanf("%[^\n]s" , str);
    scanf(" %s" , a);
   for(int i = 0 ; i<strlen(str); i++){
    if(str[i] == a[0]){
        int j;
        for( j = 1 ; j<strlen(a) ; j++){
            if(str[i+j] != a[j]){
                 printf("Word not present !!");
                break;
            }
        }
        if(j == strlen(a)){
            c++;
        }
    }
   }
        printf("Word %s is present %d times" , a , c);
    return 0;


}