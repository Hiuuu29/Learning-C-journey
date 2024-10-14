#include<stdio.h>
/* tìmibonacci thu n
*/
// so fibonacci thu 1 = 0
int find(int n){
	int f1 = 0, f2 = 1; // de cho
	int fn;
	if (n == 1 ) return 0;
	else if (n == 2) return 1;
	else
		return find(n-1) + find(n-2);
}

int main(){
	
	int n;
	scanf("%d",&n);
	printf("%lld",find(n));
	
	return 0;
}
