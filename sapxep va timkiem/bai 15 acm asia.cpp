#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* vat sua bo
moi lan vat 1 con san luong cac con con lai giam di 1 lit
*/

int comp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	if (*x < *y)
	return -1;
	else return 1;
}

int main(){
	
	int n,k; // so luong bo
	scanf("%d%d",&n,&k);
	int a[n]; // san luong sua cua moi con bo
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a,n,sizeof(int),comp);// sap xep lon -> nho
	int cnt = 1;
	for(int i = 0; i < n-1; i++){
		if(a[i+1] - a[i] > k) cnt++;
	}
	printf("%d",cnt);
	
	return 0;
}
