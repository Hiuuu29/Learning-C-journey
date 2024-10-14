#include<stdio.h>
#include<math.h>
/* input so n, tim cac so nho hon n va co dung 3 UOC
la cac so nguyen to binh phuong nho hon n
*/

int solve(int n){
	if(n == 1) return 1;
	if(n %2 == 0) return 2;
	else{
		for(int i = 3; i < sqrt(n); i+=2){
			if(n%i == 0) return i;
		}
	}
	return n;
}

int main(){

	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){ 
		printf("%d ",solve(i));
	}

	
	return 0;
}
