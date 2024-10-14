#include<stdio.h>
#include<math.h>
/* thuat toan sap xep dao
Y tuong : dao vi tri cac phan tu lon nhat (nho nhat) de sap xep tu nho den lon
O(n^2)
*/

void selection(int a[], int n){
	// buoc i : chon ptu nho nhat CHUA DC SAP XEP de hoan doi voi a[i]
	for(int i = 0; i < n - 1; i++){ // can n -1 buoc de sap xep 
		// tim ptu nho nhat
		int min_pos = i; // ban dau coi i la dia chi cua ptu nho nhat
		for( int j  = i + 1; j < n; j++){ // xet cac ptu phia ben phai
			if(a[j] < a[min_pos] ){ // so sanh GTRI trong mang de biet ptu nho nhat
				min_pos = j; // lay dia chi (index) cua ptu nho nhat
			}
		}
		// doi gtri a[i] voi a[min_pos]
		int tmp = a[i]; 
		a[i] = a[min_pos]; 
		a[min_pos] = tmp;
	}
}


int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	selection(a, n);
	for(int i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
	
	return 0;
}
