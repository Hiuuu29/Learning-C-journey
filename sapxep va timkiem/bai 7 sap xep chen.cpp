#include<stdio.h>
#include<math.h>
/*  sap sep chen insertion sort
*/

void insertion(int a[], int n){
	for(int i = 1; i < n; i++){
		int pos = i - 1;
		int value = a[i];
		while( pos >= 0 && value < a[pos] ){
			a[pos + 1] = a[pos]; // day gtri tu tu len
			pos--;		
		}// ra khoi vong lap pos da tru di
		a[pos + 1] = value;
	}
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	insertion(a,n);
	for(int i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
