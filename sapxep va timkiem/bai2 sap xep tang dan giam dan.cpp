#include<stdio.h>
#include<stdlib.h>
// dem xem trong mang co bao nhieu ptu rieng biet
// sap xep de cac ptu giong nhau dung canh nhau sau do duyet tu dau den cuoi

int comp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a,n,sizeof(int), comp);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for(int i = n - 1; i >= 0; i--){
		printf("%d ", a[i]);
	}
	
	return 0;
}
