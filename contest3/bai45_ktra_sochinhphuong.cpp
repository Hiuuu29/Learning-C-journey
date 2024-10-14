#include<stdio.h>
#include<math.h>
/* so chinh phuong la so co the bieu dien duoi dang binh phuong cua 1 so khac
vd : 1 4 9 16 ...
nhap n check, in yes or no
*/
int check(long long n){
	long long tmp = n;
	n = sqrt(n);
	if ( tmp == 1ll*n*n ) return 1;
	else return 0;
}


int main(){
	
	long long n;
	scanf("%lld", &n);
	if(check(n)) printf("yes");
	else printf("no");
	
	
	return 0;
}
