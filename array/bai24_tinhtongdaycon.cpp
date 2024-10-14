#include<stdio.h>
#include<math.h>
/* tong cac day con k
*/

int main(){
	
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n],f[n];
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	int checktime = n - k +1;
	int place = 0;
	while(checktime){
		int tong = 0;
		for(int i = place; i < place + k ; i++){
			tong += a[i];
		}
		printf("%d ", tong);
		checktime--;
		place++;
	}
	
	return 0;
}
