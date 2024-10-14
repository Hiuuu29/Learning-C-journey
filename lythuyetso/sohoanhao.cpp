#include<stdio.h>
#include<math.h>
/*SO HOAN HAO
so co tong cac uoc that su bang chinh no, (ko tinh chinh no) 
*/

int hh(int n)
{
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++) // do phuc tap O(log n)
	{
		if(n%i == 0)
		{
			sum += i;
			if(n/i != i)
			sum += n/i;
		}
	}
	return sum == n; // so sanh tra ve TRUE or FALSE
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",hh(n));
	
	return 0;
}
