#include<stdio.h>
/*tinh tong so nguyen duong ko qua n va chia het cho 3
*/
int main(){
	long long n;
	scanf("%lld",&n);
	int tong = 0;
	for (int i = 1 ;i<= n;i++)
	{
		if(i%3==0)
		{
			tong += i;	
		}
	}
	printf("%lld",tong);
	return 0;
}
