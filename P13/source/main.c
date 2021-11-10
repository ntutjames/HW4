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
	printf("請計算3.5的k次方 k=?");
	scanf_s("%d", &k);
	ans = power(3.5, k);
	printf("3.5的%d次方為%f",k,ans);
}