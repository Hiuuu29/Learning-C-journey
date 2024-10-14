#include<stdio.h>
#include<math.h>
/* so chinh phuong la so co the bieu dien duoi dang binh phuong cua 1 so khac
vd : 1 4 9 16 ...
nhap ab check, in ra chinh phuong trong doan giua 2 so a va b. ko in a,b
*/

void in(long long a, long long b){
	int res1 = sqrt(a);
	int res2 = sqrt(b);
	
	for(int i = res1; i <= res2 ; i++){ // doan tu can a den can b
		if(i*i >= a && i*i <= b){
			printf("%lld ", 1ll * i*i);
		}
	}
}

int main(){

	long long a,b;
	scanf("%lld%lld",&a,&b);
	in(a,b);
	
		
	return 0;
}
