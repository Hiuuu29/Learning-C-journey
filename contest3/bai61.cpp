#include<stdio.h>
#include<math.h>
/* gold bach
mot so nguyen duong CHAN >= 4 deu co the bieu dien duoi dang tong 2 so nguyen to
6 = 3+3
nhap so lan test T va so chan N >= 4
*/

int nguyento(int n){ // ktra so nguyen to
	if (n<2) return 0;
	for(int i = 2; i <= sqrt(n) ; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int main(){
	
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i = 1 ; i <= n/2; i++){
			if( nguyento(i) && nguyento(n-i) )  printf("%d %d\n",i, n-i);
		}
	}
	
	return 0;
}
