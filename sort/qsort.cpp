#include<stdio.h>
#include<stdlib.h>

// sap xep tang dan :  tuong tuong a,b la 2 ptu trong mang. ham comp tra ve 2 gtri 1 or -1
/*
-1 : neu a va b da dung thu tu mong muon a < b
1 : neu a va b khong dung thu tu mong muon a > b
ep kieu 2 con tro void sang 2 con tro int 
*/
int comp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	if (*x < *y) return -1;
	else return 1;
	// return *x-*y or *y-*x
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	
	qsort(a, n, sizeof(int), comp);
	
	for(int i = 0; i < n ;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
