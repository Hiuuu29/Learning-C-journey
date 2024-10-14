#include<stdio.h>
#include<math.h>
/*  sap sep noi bot bubble sort
*/


void bubble(int a[], int n){
	// can n-1 buoc, sau moi buoc thi chac chan phan tu lon nhat se duoc day xuong cuoi cung
	for(int i = 0 ; i < n - 1; i++){
		// B1 duyet tu i = 0 -> i = n - 1, B2 duyet tu i = 1 -> i = n - i - 1 (so cuoi da la lon nhat o B1)
		for(int j = 0; j < n - i - 1; j++){ 
			if(a[j] > a[j+1]){ //chi can doi dau < > thi se sap xep tang hoac giam dan
			int res = a[j+1];
			a[j+1] = a[j];
			a[j] = res;
			}
		}
		printf("buoc %d : ", i + 1);
		for(int i = 0; i < n; i++){
		printf("%d ",a[i]);
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
	bubble(a,n);

	
	
	return 0;
}
