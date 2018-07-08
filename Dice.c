#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
  int n1,n2,sum;
  char name[256];
 
  printf("What is your name?\n");
  scanf("%s",name);
    printf("Hello, %s!\n",name);

  srand((unsigned)time(NULL));
  
n1 = rand()%6+1;
n2 = rand()%6+1;

	sum=n1+n2;

	printf("Rolling the dice...\n");
	printf("Die 1: %d\nDie 2: %d\n",n1,n2);

	printf("Total value: %d\n",sum);

	if(sum>7){
	  printf("%s won\n",name);
	}
	else{
	  printf("%s lost\n",name);
	}

	return 0;
}
