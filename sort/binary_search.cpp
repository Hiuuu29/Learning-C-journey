#include<stdio.h>
#include<math.h>
/* tim kiem nhi phan : binary search
Dieu kien ap dung : mang da duoc sap xep roi(tang dan hoac giam dan)
Y tuong :  tim kiem bang cach so sanh tuan tu gtri da cho voi cac gtri tu dau den cuoi trong mang
O(N)

// giai cac bai toan : tim kiem vi tri xuat hien dau tien, cuoi cung, so lan xuat hien 
*/

int binarysearch(int a[], int n, int x){
	int l = 0, r = n -1; // index o dau va cuoi mang
	while(l <= r){
		int mid = (l+r) / 2; // index o giua mang
		if(a[mid] > x){ // khi gtri nam dau do ve phia ben trai mang
			r = mid - 1; // cap nhat index tu [0;mid-1]
		}
		else if(a[mid] < x){ // khi gtri nam dau do ve phia ben phai mang
			l = mid +1; // cap nhat index tu [mid + 1; n-1]
		}
		else{// truong hop so tim kiem x = mid
			return 1; // da tim thay
		}
	}
	return 0; // ko tim thay
}

int main(){
	
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d", binarysearch(a,n,x) );
	
	return 0;
}
