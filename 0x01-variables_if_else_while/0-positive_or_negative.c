#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main: prints the the number as positive if greaterthan 0 zero equal to 0 and negative
 *       if lessthan 0
 *
 * Return: to stop main program execution
 */
int main (void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n>1)
printf("%d is positive\n", n);
else if(n<0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);

return (0);
}
