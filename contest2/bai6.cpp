#include<stdio.h>
#include<math.h>
/*tinh tong uoc so nguyen n, do phuc tap mong doi O(log n)
*/
int main(){
	long long n;
	scanf("%lld",&n);
	
	int tong = 0;
	for (int i=1 ;i<= sqrt(n);i++) // cach lam tot hon :  chay tu 1 -> sqrt(n) (1 den can bac 2 cua n)
	{
		if(n%i == 0)
		{
			tong += i;
			if(i!=n/i)
				tong += n/i; // uoc con lai
		} 
	}
	printf("%d",tong);
	return 0;
}
