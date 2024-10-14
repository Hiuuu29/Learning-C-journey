#include<stdio.h>
/* tinh tong S(n) = 1+2+3+...+n bang de quy
*/

int s(int n){
	if (n == 0) return 0;
	else return n + s(n-1);
}

int main(){
	
	int n;
	scanf("%d",&n);
	printf("%d",s(n));
	
	return 0;
}
