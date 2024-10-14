#include<stdio.h>
#include<math.h>
/*to hop chap k cua n 
CT = n!/k!(n-k)!
C10,2 = C10,8 to hop chap 2 chua 10 = to hop chap 8 cua 10
*/

long long tohop2(int n, int k){
	k = fmin(k,n-k);
	int res = 1;
	for(int i = 1; i <= k; i++){
		res *= (n-i+1);
		res /= i;
	}
	return res;
}

int main()
{
	int n, k;
	scanf("%d %d",&n,&k);
	printf("%lld",tohop2(n,k));
	
	return 0;
}
