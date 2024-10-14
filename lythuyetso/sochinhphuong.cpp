#include<stdio.h>
#include<math.h>
/*SO CHINH PHUONG
nhap n va ktra xem n co phai la so chinh phuong hay ko
so chinh phuong la so co can bac 2 la 1 so nguyen
*/

int chinhphuong(long long n)
{
	int can = sqrt(n); // luu phan can vao so int nen mat di phan so sau dau ','
	if (1ll *can* can == n)	// neu mat phan sau dau',' thi ko bao h bang n dc // co the tran o day
		return 1;
	else 
		return 0;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",chinhphuong(n));
	
	return 0;
}
