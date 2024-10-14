#include<stdio.h>
#include<math.h>
/*so gan thuan nghich la so co chu so cuoi gap doi chu so dau. cac chu so con lai ngoai dau cuoi la so thuan nghich
Ktra n theo cac tieu chi tren
*/

int thuannghich( long long n){
	
	n /= 10; // bo so cuoi cung
	int i = 0;
	long long tmp = 0; // tmp chua so da bo chu so dau va cuoi
	while(n >= 10){
		int r = n%10;
		tmp = tmp + r*pow(10,i);
		i ++;
		n /= 10;
	}
	// thoat khoi vong lap duoc tmp = n da loai bo chu so dau va cuoi
	long long ss = tmp;
	long long hold = 0;
	while(tmp){
		hold = 10*hold + tmp%10;
		tmp /= 10;
	}
	if (hold == ss) return 1;
	else return 0;
}

int check(long long n){
	// lay chu so dau va chu so cuoi
	int a = n%10; // chu so cuoi
	int b;
	while(n){
		b = n%10;
		n /= 10;
	}
	if (a == 2*b) return 1;
	else return 0;
}

int main(){
	
	long long n;
	scanf("%lld", &n);
	if ( check(n) && thuannghich(n) ) printf("yes");
	else printf("no");
	
	return 0;
}

