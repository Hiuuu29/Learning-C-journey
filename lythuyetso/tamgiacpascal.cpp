#include<stdio.h>
#include<math.h>
/*TAM GIAC PASCAL CO DANG
1-1 C0.0
11-2 C0.1 C1.1
121-4 C0.2
1331-8
.....-16
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

int tamgiac(int n){
	for(int i = 0; i <= n - 1 ; i++){
		for(int  j = 0; j <= i ; j++){
			printf("%d ",tohop2(i,j));
		}
		printf("\n");
	}
}

int main()
{
	int n; // chieu cao tam giac pascal
	scanf("%d",&n);
	tamgiac(n);
	
	return 0;
}
