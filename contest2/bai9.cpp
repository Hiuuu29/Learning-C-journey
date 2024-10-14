#include<stdio.h>
#include<math.h>
/*tinh tich cac uoc cua so tu nhien n
*/
int main(){
	long long n;
	scanf("%lld",&n);
	int tich = 1;
	for (int i = 1 ;i<= sqrt(n);i++)
	{
		if(n%i==0)
		{
			tich *= 1ll*i;
			if(i!=n/i)
			tich *= n/i;
		}	
	}
	printf("%d", tich);
	return 0;
}
