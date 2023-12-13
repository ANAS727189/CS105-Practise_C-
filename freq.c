//2. Write a C program to find highest frequency character in a string.
//3. Write a C program to count occurrences of a character in given string.
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define pf printf
#define pan printf("Tell a no. :")
#define pas printf("Tell a sentence :")
#define sf scanf

int chcnt(char a,char arr[1000]);

int main(){
   char c,str[1000];
   int b,a=-9999;
   pas;
   fgets(str,1000,stdin);
   for(int i=0;i<strlen(str);i++){
      if(str[i]=='\n'||str[i]=='\0'|| str[i] == ' ' ){
         continue ;
      }
      b=chcnt(str[i],str);
      if(a<=b){
         a=b;
         c=str[i];
      }
   }
   return 0;
}
int chcnt(char a,char arr[1000]){
   int cntc=0;
   for(int i=0;i<=strlen(arr);i++){
      if(arr[i]== a){
         cntc +=1;
         arr[i] = ' ';
      }
   }
   pf("The charecter %c comes %d times \n",a,cntc);
   return cntc;
}