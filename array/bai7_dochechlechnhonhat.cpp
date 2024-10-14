#include<stdio.h>
#include<math.h>
/* tim do chech lech nho nhat cua 2 ptu trong mang
*/
int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int min = abs( a[0] - a[1] ); 
	
	for(int i = 0;i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if( min >= abs( a[i] - a[j] ) ) min = abs ( a[i] - a[j] );
		}
	}
	printf("%d", min);
	
	return 0;
}
