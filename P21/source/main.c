#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	unsigned seed;
	printf("enter seed");
	scanf_s("%u", &seed);
	srand(seed);
	for (i = 1; i <= 20; i++)
	{
		printf("%10d", 1 + rand() % 6);
		if (i % 5 == 0)
		{
			printf("\n");
		}
	}
}