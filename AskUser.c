#include <stdio.h>
 
int main(void){
  char name[256];
 
  printf("What is your name?\n");
  scanf("%s",name);
    printf("Hello, %s!\n",name);
 
  return 0;
}
