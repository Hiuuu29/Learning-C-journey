#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* vat sua bo
moi lan vat 1 con san luong cac con con lai giam di 1 lit
*/

int comp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *y - *x;
}

int main(){
	
	int n; // so luong bo
	scanf("%d",&n);
	int a[n]; // san luong sua cua moi con bo
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a,n,sizeof(int),comp);// sap xep lon -> nho
	long long lit = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > i){
			lit += a[i] - i;
		}
		else break;
	}
	printf("%lld",lit);
	
	return 0;
}
