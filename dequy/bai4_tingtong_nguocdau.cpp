#include<stdio.h>
#include<math.h>
/*tinh tong S(n) = -1+2+-3+...+(-1)^n*n bang de quy
cong thuc neu n chan Sn= n/2 ; n le Sn = (n-1)/2 - n
*/

int s(int n){
	if(n == 0) return 0;
	else return pow(-1,n)*n + s(n-1);
}

// cach 2
int s2(int n){
	if (n == 0) return 0;
	else{ // tach chan va le ra de tinh
		if(n%2 == 0)
			return n + s(n-1); // cac so chan thi cong nhau
		else
			return -n + s(n-1); // cac so le thi tru nhau
	}
	
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",s(n));
	
	return 0;
}
