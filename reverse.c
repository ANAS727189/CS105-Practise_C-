#include<stdio.h>
#include<string.h>
int main(){
char str[1000] , revstr[1000];
scanf("%[^\n]s" , str);
int i = 0;
int k = strlen(str);
while(str[i] != '\0'){
    revstr[k-1] = str[i]; 
    k--;
    i++;
}
revstr[strlen(str)] = '\0';
printf("Reverse string is = %s" , revstr);
return 0;
}