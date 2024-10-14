#include<stdio.h>
/*tinh tong binh phuong S = 1^1+2^2+3^3+...+n^n
*/
int main(){
	long long n;
	scanf("%lld",&n);
	int tong = 0;
	for (int i = 1 ;i<= n;i++)
	{
		tong += i*i;
	}
	printf("%lld",tong);
	return 0;
}
