#include<stdio.h>
#include<ctype.h>
int main(){
    char s[1000];
    printf("Enter a sentence : ");
    scanf(" %[^\n]" , s);
    int i = 0 , c = 0;
    char vowels[6] = {0};
    while(s[i] != '\0'){
        char ch = tolower(s[i]);
        if(ch== 'a' || ch == 'e' || ch == 'i' || ch== 'o' || ch == 'u'){
           c++;
           if(ch== 'a'){
            vowels[0]++;
           }
           if(ch == 'e'){
            vowels[1]++;
           }
           if(ch == 'i'){
            vowels[2]++;
           }
           if(ch == 'o'){
            vowels[3]++;
           }
           if(ch == 'u'){
            vowels[4]++;
           }
        }
        i++;
    }
    printf("Total number of vowels are = %d\n" , c);
    printf("Frequency of a is = %d\n" , vowels[0]);
    printf("Frequency of e is = %d\n" , vowels[1]);
    printf("Frequency of i is = %d\n" , vowels[2]);
    printf("Frequency of o is = %d\n" , vowels[3]);
    printf("Frequency of u is = %d\n" , vowels[4]);
    return 0;
}