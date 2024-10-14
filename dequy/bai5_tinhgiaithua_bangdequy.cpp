#include<stdio.h>
/* giai thua bang de quy 0<=n<=10
*/

long long gt(int n){
	if (n == 0) return 1;
	else return n * gt(n-1);
}

int main(){
	
	int n;
	scanf("%d",&n);
	printf("%lld",gt(n));
	
	return 0;
}
