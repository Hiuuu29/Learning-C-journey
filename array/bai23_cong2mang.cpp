#include<stdio.h>
#include<math.h>
/* tinh mang f[i] = f[i-1] + a[i]
cho f[0] = a[0];
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n],f[n];
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	f[0] = a[0];
	for(int i =1; i < n ; i++){
		f[i] = f[i-1] + a[i];
	}
	
	
	return 0;
}
