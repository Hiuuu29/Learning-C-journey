#include<stdio.h>
/*tinh tong S = 1+2+3+...+n
*/
int main(){
	long long n;
	scanf("%lld",&n);
	int tong = 0;
	for (int i = 1 ;i<= n;i++)
	{
		tong += i;
	}
	printf("%lld",tong);
	return 0;
}
