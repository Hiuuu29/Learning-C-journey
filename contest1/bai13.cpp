#include<stdio.h>
/* cho N ngay hay doi N thanh so nam, tuan , ngay
cho 1 nam co 365 ngay
*/
int main()
{
	int n;
	int nam,tuan;
	scanf("%d",&n);
	
	if (n > 0)
	{
		nam =  n / 365;	// ra so nguyen
		n %= 365; // so ngay con lai sau khi lay nam di
		tuan = n/7; // ra so nguyen
		n %= 7;
		printf("%d %d %d",nam ,tuan, n);
	}
	else printf("INVALID");
	
	return 0;
}
