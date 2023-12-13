#include<stdio.h>
int main(){
int ch;
printf("enter choice: 1 or 2 or 3: ");
scanf("%d", &ch);
switch(ch) {
case 1:printf("You entered choice: 1"); break;
case 2:printf("You entered choice: 2"); break;
case 3:printf("You entered choice: 3"); break;
default: printf("Invalid choice"); break;
}
return 0;
}