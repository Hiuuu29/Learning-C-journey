#include<stdio.h>
/*
S() = 1^3 + 2^3 +3^3 + ... + n^3
công thuc tinh S(n) = [n*(n+1)/2]^2
*/

long long s(int n){
	if(n == 0) return 0;
	else return n*n*n + s(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",s(n));
	
	return 0;
}
