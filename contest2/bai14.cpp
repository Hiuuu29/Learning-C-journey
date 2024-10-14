#include<stdio.h>
#include<math.h>
/*tinh tong lap phuong S = 1^3 + 2^^^^3 + ... + n^3
*/
int main(){
	int n; // so luong so nguyen se nhap
	scanf("%d",&n);
	int tong = 0;
	for (int i = 1 ; i <= n; i++)
	{
		tong += i*i*i;
	}
	printf("%d",tong);
	return 0;
}
