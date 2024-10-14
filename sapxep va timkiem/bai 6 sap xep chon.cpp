#include<stdio.h>
#include<math.h>
/*  in ra cac buoc cua selection sort
*/

void selection(int a[], int n){
	int min_pos;
	for(int i = 0 ;i < n - 1; i++){
		min_pos = i;
		for(int j = i + 1; j < n; j++){
			if( a[min_pos] > a[j] ) min_pos = j;
		}
		int res = a[i]; a[i] = a[min_pos]; a[min_pos] = res;
		for (int e = 0; e < n; e++){
			printf("%d ",a[e]);
		}
		printf("\n");
	}
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	selection(a,n);
	
	
	return 0;
}
