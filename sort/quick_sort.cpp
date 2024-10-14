#include<stdio.h>
#include<math.h>
/* thuat toan sap xep quick sort
Y tuong : 
O(nlog n)
*/
// phan hoach lomuto
/* phan hoach la gi : ban dau co mang dc sap xep tang dan, chon 1 pivot (chon 1 value = khoa) nho gtri khoa chia mang thanh 2 phan 
phan 1 nho hon pivot, phan 2 lon hon pivot
tiep tuc de quy cho den khi day chi con 1 phan tu va se dc sap xep tu nho den lon
*/

// ham phan hoach lomuto
int partition(int a[], int l, int r){
	int i = l - 1, pivot = a[r];
	for(int j = l; j < r; j++){
		if(a[j] <= pivot){
			++i;
			int res = a[i];
			a[i] = a[j];
			a[j] = res;
		}
	}
	// cho pivot ve giua
	++i;
	int res = a[i];
	a[i] = a[r];
	a[r] = res;
	
	return i;
}

void quicksort(int a[], int l, int r){
	if(l < r){
		int pos = partition(a, l, r);
		// xet de quy day ben trai
		quicksort(a, l, pos - 1);
		quicksort(a, pos + 1, r);
	}
}


int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	
	quicksort(a, 0, n-1);
	
	for(int i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
