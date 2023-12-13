#include <stdio.h>
#include <string.h>

int main() {
  char s1[1000], s2[1000];
  printf("Enter the 1st sentence: ");
  scanf(" %[^\n]", s1);
  printf("Enter the 2nd sentence: ");
  scanf(" %[^\n]", s2);

  int i;
  int equal = 1; 

  
  for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
    if (s1[i] != s2[i]) { 
        equal = 0;
      break;     
    }
  }

 
  if (s1[i] != '\0' || s2[i] != '\0') {
    equal = 0;  
  }

  if (equal) {
    printf("Both sentences are equal !!\n");
  } else {
    printf("Both sentences are not equal.\n");
  }

  return 0;
}
