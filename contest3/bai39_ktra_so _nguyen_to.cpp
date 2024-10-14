#include<stdio.h>
#include<math.h>
/* krta n co phai so nguyen to hay ko
*/

int ktra(int n)
{
	if (n < 2) // so 1 ko phai so nguyen to
	return 0;
	for(int i = 2 ; i <= sqrt(n) ; i++)
	{
		if(n % i == 0) return 0; // n ko phai la so nguyen to
	}
	return 1;
}


int main()
{
	int n;
	scanf("%d",&n);
	if (ktra(n)) printf("yes");
	else printf("no");
	
}
