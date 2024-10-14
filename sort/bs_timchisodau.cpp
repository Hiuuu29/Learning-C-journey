#include<stdio.h>
#include<math.h>
/* tim kiem nhi phan : binary search
Dieu kien ap dung : mang da duoc sap xep roi(tang dan hoac giam dan)
Y tuong :  tim kiem bang cach so sanh tuan tu gtri da cho voi cac gtri tu dau den cuoi trong mang
O(N)

// giai cac bai toan : tim kiem vi tri xuat hien dau tien, cuoi cung, so lan xuat hien 
*/

// bien the 1 : tim chi so dau tien cua ptu x trong mang da dc sap xep, neu ko tim thay tra ve -1 
int bs1(int a[], int n, int x){
	int res = -1;
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
			res = mid; // da tim thay
			// tim them o ben trai xem co con ptu nao nua ko (ben phai ko can tim vi tim vi tri dau tien)
			r= mid - 1;
		}
	}
	return res; // tra ve vi tri (index) xuat hien dau tien
}

int bs2(int a[], int n, int x){ // tim vi tri cuoi cung
	int res = -1;
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
			res = mid; // da tim thay
			// tim them o ben trai xem co con ptu nao nua ko (ben phai ko can tim vi tim vi tri dau tien)
			l= mid + 1;
		}
	}
	return res; // tra ve vi tri (index) xuat hien dau tien
}


// tim ptu dau tien >= x 
int bs3(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n -1; // index o dau va cuoi mang
	while(l <= r){
		int mid = (l+r) / 2; // index o giua mang
		if(a[mid] >= x){ // khi gtri nam dau do ve phia ben trai mang
			res = mid;
			r = mid - 1; // cap nhat index tu [0;mid-1]
		}
		else { // khi gtri nam dau do ve phia ben phai mang
			l = mid + 1; // cap nhat index tu [mid + 1; n-1]
		}
	}
	return res; // tra ve vi tri (index) xuat hien dau tien
}

// tim ptu cuoi cung <= x, trong mang tang dan
/* 10 7
1 2 4 6 6 8 9 10 11 12 -> res = 6
*/
int bs4(int a[], int n, int x){
	int res = -1;
	int l = 0, r = n -1; // index o dau va cuoi mang
	while(l <= r){
		int mid = (l+r) / 2; // index o giua mang
		if(a[mid] <= x){ // khi gtri nam dau do ve phia ben phai mang
			res = mid;
			l = mid + 1; // cap nhat index tu [0;mid-1]
		}
		else { // khi gtri nam dau do ve phia ben phai mang
			r = mid - 1; // cap nhat index tu [mid + 1; n-1]
		}
	}
	return res; // tra ve vi tri (index) xuat hien dau tien
}

int main(){
	
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d %d", bs1(a,n,x), bs4(a,n,x) );
	
	return 0;
}
