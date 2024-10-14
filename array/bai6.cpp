#include<stdio.h>
#include<math.h>
/* cap so
xet trong mang co bao nhieu cap co tong bang k
*/



int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int k;
	scanf("%d",&k);
	int dem = 0;
	for(int i = 0;i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] + a[j] == k) dem++;
		}
	}
	printf("%d", dem);
	
	return 0;
}
