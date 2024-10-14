#include<stdio.h>
#include<math.h>
/*nhap N so nguyen : tinh tong cac so chan
dong 1 nhap so luong so nguyen 
dong 2 nhap cac so nguyen 
dong 3 tinh tong
*/
int main()
{
	int n;
	scanf("%d",&n);
	long long tong = 0;
	for(int i = 1; i <= n ; i++)
	{
		int x; scanf("%d",&x);
		if(x%2 == 0)
		{
			tong  += x;
		}
	}
	printf("%lld",tong); 
	
	return 0;
}
