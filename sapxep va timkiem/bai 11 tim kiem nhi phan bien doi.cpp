#include<stdio.h>
#include<math.h>
/* mang da dc sap xep tang dan
1. tim vi tri dau tien xuat hien ptu x
2. tim vi tri cuoi cung xuat hien ptu x
3. tim vi tri dau tien xuat hien ptu >= x
4. tim vi tri dau tien xuat hien ptu > x
5. tim so lan xuat hien cua ptu x trong mang
*/

int ham1(int a[], int n, int x){
	int res = -1; // in ra vi tri tim duoc
	int l = 0, r = n - 1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] < x){
			l = mid + 1;
		}
		else if( a[mid] > x ){
			r = mid - 1;
		}
		else{
			mid = res;
			r = mid - 1; // vi tri dau tien tim trong mang nam phia ben trai (mang tang dan)
		}
	}
	return res;
}

int ham2(int a[], int n, int x){
	int res = -1; // in ra vi tri tim duoc
	int l = 0, r = n - 1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] < x){
			l = mid + 1;
		}
		else if( a[mid] > x ){
			r = mid - 1;
		}
		else{
			mid = res;
			l = mid + 1; // vi tri cuoi cung tim phia ben phai mang (mang tang dan)
		}
	}
	return res;
}

int ham3(int a[], int n, int x){
	int res = -1; // in ra vi tri tim duoc
	int l = 0, r = n - 1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] > x){
			res = mid;
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return res;
}

int ham4(int a[], int n, int x){
	int res = -1; // in ra vi tri tim duoc
	int l = 0, r = n - 1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] <= x){
			res = mid;
			r = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return res;
}

int main(){
	
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	printf("%d\n", ham1(a,n,x));
	printf("%d\n", ham2(a,n,x));
	printf("%d\n", ham3(a,n,x));
	printf("%d\n", ham4(a,n,x));
	if(ham1(a,n,x) != -1)
	printf("%d\n", ham2(a,n,x) - ham1(a,n,x) + 1);
	else 
	printf("0");
	
	
	
	return 0;
}
