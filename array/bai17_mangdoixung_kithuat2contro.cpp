#include<stdio.h>
#include<math.h>
/* ktra mang thuan nghich
*/

int check(int a[], int n){
	int l = 0, r = n -1;
	while(l <=r ){
		if(a[l] != a[r]) return 0; //ko phai mang doi xung
		l++;
		r--;
	}
	return 1;
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	if( check( a,n ) ) printf("yes");
	else printf("no");
	
	
	return 0;
}
