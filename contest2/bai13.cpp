#include<stdio.h>
#include<math.h>
/*tinh tongle S = 1+3+5+7+9+...+2n-1
*/
int main(){
	int n; // so luong so nguyen se nhap
	scanf("%d",&n);
	int tong = 0;
	for (int i = 1 ;i<= 2*n -1 ;i+=2)
	{
		tong += i;
	}
	printf("%d",tong);
	return 0;
}
