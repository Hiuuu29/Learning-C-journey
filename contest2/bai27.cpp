#include<stdio.h>
#include<math.h>
/*cho so nguyen duong ko am n.tinh cac chu so cua n cho den khi n con 1 chu so
vd 289 - > 19 -> 0
 */
int main()
{
	long long n;
	scanf("%lld",&n);
	while(n >= 10)
	{
		int tong = 0;
		while(n)
		{
			tong += n%10;
			n /= 10;
		}
		n = tong;
	}
	printf("%lld",n);
	
	
	return 0;
}
