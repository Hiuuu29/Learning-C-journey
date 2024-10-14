#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* ghep 2 mang nam nu
chieu cao nam cao hon nu
*/

int comp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *y - *x;
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	qsort(a,n,sizeof(int),comp);
	int stand = a[0];
	int cnt = 1;
	for(int i = 0; i < n - 1; i++){
		if ( a[i] > a[i+1]){
			cnt += 1;
			stand = fmin(stand-1, a[i+1]);
		}
		else{
			cnt += 1;
			stand--;
			if(stand  == 0)break;
		}
	}
	printf("%d",cnt);
	
	return 0;
}
