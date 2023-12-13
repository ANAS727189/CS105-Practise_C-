#include <stdio.h>
typedef struct student { 
int age; 
char marks; 
} s; 

// Driver code
int main() { 
    struct student a = {15 , 56};
printf("age = %d", a.age); 
printf("\nmarks = %d", a.marks); 
}
