#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
  int n1,n2,sum;

  srand((unsigned)time(NULL));
  
n1 = rand()%6+1;
n2 = rand()%6+1;

	sum=n1+n2;

	printf("Rolling the dice...\n");
	printf("Die 1: %d\nDie 2: %d\n",n1,n2);

	printf("Total value: %d\n",sum);

	if(sum>7){
	  printf("You won\n");
	}
	else{
	  printf("You lost\n");
	}

	return 0;
}
