#include<stdio.h>
#include<stdlib.h>
double power(double x, int n)
{
	int i; double powerxn = 1;
	for (i = 1; i <= n; i++)
		powerxn *= x;
	return powerxn;

}
void main()
{
	int k; double ans;
	printf("�Эp��3.5��k���� k=?");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5��%d���謰%f",k,ans);
}