#include <stdio.h>
#include <string.h>

int main() {
  char s1[1000], s2[1000];
  printf("Enter the 1st sentence: ");
  scanf(" %[^\n]", s1);  
  printf("Enter the 2nd sentence: ");
  scanf(" %[^\n]", s2); 

  
  if (strcmp(s1, s2) == 0) {
    printf("Both sentences are equal !!\n");
  } else {
    printf("Both sentences are not equal.\n");
  }

  return 0;
}
