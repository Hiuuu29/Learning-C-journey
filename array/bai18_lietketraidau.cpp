#include<stdio.h>
#include<math.h>
/* neu 1 ptu trong mang co 1 trong 2 ptu ke ben no trai dau thi in ra 
*/

void check(int a[], int n){
	if(a[0] * a[1] < 0 ) printf("%d ", a[0]);
	for(int i = 1; i <= n-1; i++){
		if( a[i] * a[i-1] < 0 || a[i] * a[i+1] < 0 ) printf("%d ",a[i]);
	}
	if(a[n] * a[n - 1] < 0 ) printf("%d ", a[n]);
	
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	check(a,n);
	
	
	return 0;
}
