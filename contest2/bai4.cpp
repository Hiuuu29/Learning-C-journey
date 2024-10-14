#include<stdio.h>
/*tinh tong  nghinh dao S = 1+1/2+1/3+...+1/n
*/
int main(){
	long long n;
	scanf("%lld",&n);
	double tong = 0;
	for (int i = 1 ;i<= n;i++)
	{
		tong += 1.0/i;
	}
	printf("%.3lf",tong);
	return 0;
}
