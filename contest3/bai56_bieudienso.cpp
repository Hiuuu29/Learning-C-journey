#include<stdio.h>
#include<math.h>
/*nhap s. co gang tao ra x bang tong cac so 11 111 1111 ... (cac so ma chi co chu so 1)
giai phuong trinh 11x+111y+1111z + ... = x
nghiem nguyen ko am
ptich cac so 1111 = 111x10 +11 11111 = 111x100 +11
=> 11x + 111y = n
*/

// bai 26 giai ax + by =n
/*  nghiem o day la nguyen, by >= 0
nghiem x chay tu [0,n/a]
y = (n - 11a)/b
*/

int check(int n){
	for(int i = 0; i <= n / 111; i++){
		int y = n - 111*i;
		if (y % 11 == 0)   return 1;
	}
	return 0;
}


int main (){
	int n;
	scanf("%d",&n);
	if(check(n)) printf("yes");
	else  printf("no");
	
	return 0;
}
