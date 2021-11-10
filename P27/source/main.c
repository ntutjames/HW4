#include<stdio.h>
#include<stdlib.h>
long factor(long num)
{
	if (num <= 1)
	{
		return 1;
	}
	else
	{
		return(num*factor(num-1));
	}
}
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d!=%1d\n", i, factor(i));
	}
}