#include<stdio.h>
#include<math.h>
/*tinh tong giai thua S = 1 + 1.2 + 1.2.3 + ... 1.n!
 */
int main()
{
	long long n;
	scanf("%lld",&n);
	long long tong = 0;
	long long gt = 1;
	for(int i = 1; i <= n; i++)
	{
		gt *= i;
		tong += gt;
	}
	
	printf("%lld",tong);
	
	
	return 0;
}
