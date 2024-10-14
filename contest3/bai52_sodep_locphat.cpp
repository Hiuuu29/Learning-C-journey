#include<stdio.h>
#include<math.h>
/* so dep : so thuan nghich, co chua it nhat 1 chu so 6 va tong cac chu so co chu so cuoi cung la 8
liet ke cac so dep giua 2 doan so nguyen cho truoc
*/

int thuannghich(int n){
	int tmp = n;
	int hold = 0;
	int a = 0;
	while(n){
		int r = n%10;
		if(r == 6) a = 1; 
		hold = 10*hold + n%10;
		n /= 10;
	}
	if (hold == tmp && a == 1) return 1;
	else return 0;
}

int tongcs(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	if (tong == 8) return 1;
	else return 0;
	
}


int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i = a ; i <= b ; i++){
		if(thuannghich(i) && tongcs(i)) printf("%d ",i);
	}
	
}
