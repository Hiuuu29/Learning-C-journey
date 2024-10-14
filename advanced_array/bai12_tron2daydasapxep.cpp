#include<stdio.h>
#include<math.h>
/* tron 2 mang da sap xep thanh 1 mang
*/

int main(){
	
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d",&b[i]);
	}
	int i = 0 , j = 0;
	while(i < n && j < m){
		if( a[i] <= b[j] ){
			printf("%d ",a[i]); ++i;
		}
		else{
			printf("%d ",b[j]); ++j;
		}
	}
	while(i < n){
		printf("%d ",a[i]); ++i;
	}
	while(j < m){
		printf("%d ",b[j]); ++j;
	}
	
	return 0;
}
