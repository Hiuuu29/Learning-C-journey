#include<stdio.h>
#include<math.h>
/*tinh tong S = -1 +2 -3 + 4 -... (-1)*n^n
*/
int main(){
	int n; // so luong so nguyen se nhap
	scanf("%d",&n);
	int tong = 0;
	for (int i = 1 ;i<= n;i++)
	{
		tong += i*pow(-1,i);
	}
	printf("%d",tong);
	return 0;
}
