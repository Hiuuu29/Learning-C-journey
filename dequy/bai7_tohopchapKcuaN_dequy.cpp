#include<stdio.h>
#include<math.h>
/* to hop chap k cua n bang de quy
*/

int tohop(int n, int k){
	if (k==0 || n == k) 
		return 1;
	else return 
		tohop(n-1,k-1) + tohop(n-1,k);
}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d", tohop(n,k));
	
	
	return 0;
}
