#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the starting point for the program to be run
 * Return - the return of the success is 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX/2;
if (n==0){
printf ("%d is zero\n", n);
}else if (n<0){
printf ("%d is negative\n", n);
}else if (n>0){
printf ("%d is positive\n", n);
}
return(0);
}
