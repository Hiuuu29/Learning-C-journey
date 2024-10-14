#include<stdio.h>
#include<stdlib.h>
// 

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
	int min = 1e9;
	qsort(a,n,sizeof(int), comp);
	for(int i = 1; i < n; i++){
		if( min > (a[i] - a[i-1]) ) min = a[i] - a[i-1];
	}
	printf("%d", min);
	
	return 0;
}
