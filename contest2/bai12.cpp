#include<stdio.h>
#include<math.h>
/* nhap vao so nguyen duong ko qua 10^6, tinh tong S = 2+4+6+8+...+2*n
*/
int main(){
	int n; // so luong so nguyen se nhap
	scanf("%d",&n);
	int tong = 0;
	for (int i = 0 ;i<= 2*n;i+=2)
	{
		tong += i;
	}
	printf("%d",tong);
	return 0;
}
