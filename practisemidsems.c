// #include <stdio.h>
// int main() {   
//   int x = 10;
//   float x = 10.0; /// COMPILER ERROR .....
//   printf("%d",x);
//   return 0;
// }



// #include <stdio.h>
// int main(){
//    const int p;
//    p = 4;   // compiler error as constant variable doesnot get any values change 
//    printf("p is %d", p);
//    return 0;
// }



// #include<stdio.h>
// int main(){
//   int π = 3.14;
//   printf("%d",π);  // compiler error 
//   return 0;
// }


// #include<stdio.h>
// int main(){
//    unsigned int c= -2;
//    printf("c=%u", c);   // c = 789422(GARBAGE VALUE)
//    return 0;
// }

// #include<stdio.h>
// int main(){
//    int a=5;
//    a=printf("Good")+ printf("Day");
//    printf("%d",a);    // output = GoodDay7
//    return 0;
// }



// #include<stdio.h>
// int main(){
//     printf("\nab");
//     printf("\bsi");
//     printf("\rha");       // output = hai
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// int main() {
//     int ch;
//     printf("Continue(Y/N)?");
//     ch = getch();  
//     putch(ch);
//     return 0;

// }



// #include <stdio.h>
// int main() {
//     int a,b,c, num;
//     num = scanf("%d %d %d",&a,&b,&c);
//     a++; b++; c++;
//     printf("I read %d values",num);   // I read 2 values
//     return 0;
// }



// #include <stdio.h>
// int main() {

// int a=010;
// // int a=0x10;
// printf("\n a=%d",a);  // a = 8
// return 0;

// }


// #include <stdio.h>
// int main() {

// int a=010;
// printf("\n a=%o",a);  // a = 10
// return 0;

// }


// #include <stdio.h>
// int main() {

// int a=010;
// printf("\n a=%x",a);   // a = 8
// return 0;

// }


// #include <stdio.h>
// int main() {

// int a=53;
// printf("\n a=%o",a);   // a = 65
// return 0;

// }


// #include <stdio.h>
// int main() {

// int a=53;
// printf("\n a=%x",a);   // a = 35
// return 0;

// }


// #include<stdio.h>
// int main () {
// int y = 128;
// const int x = y;
// printf("%d", x);
// }



#include<stdio.h>
// volatile int x ;
// int main(){
//     x = 0;
//     if(x==0){
//         printf("x = 0");
//     }
//     else{
//         printf("X != 0");
        
//     }

// }

// int main(){
//     int  x= 5;
//     int y = x = 2* x;
//      printf("\n%d\t%d" , y , x);  // 10  10


//     int i = 0, j;
// j = (i += 1, i += 2, i + 3);
// printf("\n%d\t%d" , j , i); // 6  3


//     int m = 1;
// int n;
// n = (m = m+3, m%3);
// printf("\n%d\t%d" , n , m);  // 1  4
// }


 // IMPORTANT !!!

// int main() {
// int x=5;
// printf("Values are %d and %d\n", x++, ++x);  // 6  7
// return 0;

// }

// int main() {
// int x = 4;
// printf("Result = %d\n",x++ + x); //9
// return 0;

// }


// int main( ) {
// int x, count = 0;
// printf("Enter the Numbers: ");
// scanf("%d",&x);
// while(x >= 0) {
//     scanf("%d",&x);
// count ++;
// }
// printf("positive numbers count = %d", count);
// return 0;
// }


// int main(){
//     int n;
//     scanf("%d" , &n);
//     int fact = 1;
//     for(int i = 1; i <= n ; i++){
//         fact *= i;
//     }
//     printf("Factorial is = %d" , fact);
//     return 0;
// }



// int main(){
//     int number;
//     scanf("%d" , &number);
//     switch(number) {
// case 1:
// case 3:
// case 5:
// case 7:
// case 9:printf("\n%d is an odd number", number);break;
// case 2:
// case 4:
// case 6:
// case 8:printf("\n%d is an even number\n", number);break;
// default: printf("\n%d is a value not between or including 1 and 9.", number);

// break;

// }
// }


// int main(void) {
// int a=5;
// printf(" a=%d ", a);
// {
// printf("a=%d ", a);
// int b=10;
// printf("b=%d ", b);
// }
// printf("a=%d ", a);
// //printf("b=%d", b);
// return 0;
// }



// int main() {
//     printf(" %d", getchar());  // If A is input then output = 65
//     return 0;
// }



int main(){

printf("%s","hello");
printf("\n%3s","hello");
printf("\n%10s","hello");
printf("\n%-10s","hello");
printf("\n%10.3s","hello");
return 0;

}
