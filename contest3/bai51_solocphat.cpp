#include<stdio.h>
#include<math.h>
/*so loc phat :  so loc phat la so chi co 3 so 0 6 8
nhap n ktra co phai so loc phat hay ko
*/

int check(long long n){
	long long tmp = n;
	while(n){
		int r = n%10;
		if(r!= 0 && r!= 6 && r!=8) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	long long n;
	scanf("%lld", &n);
	if(check(n)) printf("1");
	else printf("0");
	
	return 0;
}
