#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n,m;
  char name[100];
   srand(time(NULL));
   
   n = (rand())% 6 + 1;
   m = (rand())% 6 + 1;

 
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",n);
  printf("Die 2: %d\n",m);
  printf("Total Value: %d\n",n+m);
 
  return 0;
}

  
  
