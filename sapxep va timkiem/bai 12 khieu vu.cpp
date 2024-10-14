#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* ghep 2 mang nam nu
chieu cao nam cao hon nu
*/

int comp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

int main(){
	
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	qsort(a,n,sizeof(int),comp);
	qsort(b,m,sizeof(int),comp);
	int i = 0, j = 0;
	int cnt = 0;
	while(i < n && j < m){
		if( a[i] > a[j]){
			++cnt; ++i; ++j;
		}
		else{
			++i;
		}
	}
	printf("%d",cnt);
	
	return 0;
}
