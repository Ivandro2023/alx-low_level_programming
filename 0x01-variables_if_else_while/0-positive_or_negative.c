#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
srand(time(o));
n=rand() - RAND_MAX/2;
if(n<0)
{
printf("%d is negative\n", n);
}
else if (n>0)
{
printf("% is positive\n" , n);
}
else
{
printf("%d is zero\n" , n);
}

return (0);

}
