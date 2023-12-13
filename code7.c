#include <stdio.h>
#include <ctype.h>

int main() {
   char s[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", s);
    int p = 0 , n = 0;
while(s[p] != '\0'){
    if(s[p] != ' '){
        n++;
    }
    p++;
}
for(int i=0; i<n; i ++){
for( int j = 0; j <=i; j++){
        printf("%c" , s[j]);
}
printf("\n");
}
    return 0;
}
