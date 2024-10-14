#include<stdio.h>
/* tong nghich dao 2 s = 1/2+1/4+1/6+...+1/(2N)
*/
int main(){
	int n;
	scanf("%d",&n);
	double tong = 0; 
	for(int i = 1;i<=n;i++){
		tong += 1.0/(2*i);
	}
	printf("%.3lf",tong);
	return 0;
}
