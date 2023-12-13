#include<stdio.h>

int main(){
char ch;
printf("enter character A or B: ");
scanf("%c", &ch);
switch(ch) {
case 'A': printf("You entered an A");break;
case 'B': printf("You entered a B"); break;
default: printf("wrong entry"); break;
}
return 0;
}