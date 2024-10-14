#include<stdio.h>
#include<math.h>
/*TONG UOC VA DEM UOC
NHAP VAO N  va in ra tong uoc cua n 
*/

int tonguoc(int n){ //O(log n )
	int sum = 0;
	for(int i = 1; i <= sqrt(n) ; i++)
	{
		if(n % i == 0)
		{
			sum += i;
			if(n/i != i)
				sum += n/i;
		}
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",tonguoc(n));
	
	return 0;
}
