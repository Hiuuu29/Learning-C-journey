#include<stdio.h>
/*
S() = 1^2 + 2^2 +3^2 + ... + n^2
công thuc tinh S(n) = n*(n+1)*(2n+1)/6
*/

int s(int n){
	if(n == 0) return 0;
	else return n*n + s(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",s(n));
	
	return 0;
}
