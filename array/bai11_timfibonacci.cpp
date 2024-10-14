#include<stdio.h>
#include<math.h>
/* tim so fibonacci trong mang
neu ko co in ra NONE
*/
// cach 1
long long find(long long n){
	if (n == 1 || n == 0 ) return 1;
	int fn2 = 0, fn1 = 1, fn;
	for(int i = 1; i <= 92; i++){
		fn = fn2 + fn1;
		if (fn == n) return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}

// cach 2 tao 1 look up table xong so sanh
long long F[100]; // tao 1 mang chua cac so fibonacci
void ktao(){
	F[1] = 1;
	F[0] = 0;
	for(int i = 2; i<=92; i++ ){
		F[i] = F[i-1] + F[i-2];
	}
}

int check2(long long n){
	for(int i = 0; i <= 92; i++){
		if(n == F[i]) return 1;
	}
	return 0;
}


int main(){

	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int check = 0;
	for(int i = 0; i < n; i++){
		if(find(a[i])){
			printf("%d ",a[i]);
			check = 1;
		}
	}
	printf("\n");
	ktao();
	for (int i = 0; i < n; i++){
		if(check2(a[i])){
			printf("%d ",a[i]);
			check = 1;
		}
	}
	if (check == 0) printf("None");
	
	return 0;
}
