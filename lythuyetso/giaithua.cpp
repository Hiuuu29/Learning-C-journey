#include<stdio.h>
/*GIAI THUA
nhap vao n va tinh n!
*/

long long gt(int n)
{
	int res = 1;
	for(int i = 1; i<= n ;i ++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",gt(n));
	
	return 0;
}
