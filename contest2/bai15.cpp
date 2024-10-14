#include<stdio.h>
#include<math.h>
/*tinh tinh giai thua nhap n ko qua 15
*/
int main(){
	int n; // so luong so nguyen se nhap
	scanf("%d",&n);
	int tong = 1;
	for (int i = 1 ; i <= n; i++)
	{
		tong *= i;
	}
	printf("%d",tong);
	return 0;
}
