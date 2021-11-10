#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum status{con, won, lost};
int roll()
{
	int d1, d2, sum;
	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	sum = d1 + d2;
	printf("player  rolled %d + %d=%d\n", d1, d2, sum);
	return sum;
}
int main()
{
	int total;
	int mp;
	enum status gamestatus;
	srand(time(NULL));
	total = roll();
	switch (total)
	{
		case 7:
		case 11:
			gamestatus = won;
			break;
		case 2:
		case 3:
		case 12:
			gamestatus = lost;
			break;
		default:
			gamestatus = con;
			mp = total;
			printf("my point is %d\n", mp);
			break;
	}
	while (gamestatus == con)
	{
		total = roll();
		if (total == mp)
		{
			gamestatus = won;
		}
		else
		{
			if(total==7)
			{
				gamestatus = lost; 
			}
			
		}
	}
	if (gamestatus == won)
	{
		printf("player wins\n");
	}
	else
	{
		printf("player loses\n");
	}
}