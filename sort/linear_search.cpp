#include<stdio.h>
#include<math.h>
/* tim kiem tuyen tinh :  linear search
Y tuong :  tim kiem bang cach so sanh tuan tu gtri da cho voi cac gtri tu dau den cuoi trong mang
O(N)

// giai cac bai toan : tim kiem vi tri xuat hien dau tien, cuoi cung, so lan xuat hien 
*/

int linearsearch(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x)
		return 1;
	}
	return 0;
}

int main(){
	
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	linearsearch(a,n,x);
	
	return 0;
}
