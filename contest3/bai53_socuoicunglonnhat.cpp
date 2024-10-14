#include<stdio.h>
#include<math.h>
/* nhap n va liet ke cac so nguyen to nho hon hoac bang n. cac so nay phai co chu so cuoi cung lon nhat
(chu so cuoi cung lon hon cac so con lai)
*/

int check(int n){
	int last = n%10; // lay dc chu so cuoi cung
	n /= 10; // bo chu so cuoi cung
	while(n){
		int r = n%10;
		if(r > last) return 0;
		n /= 10;
	}
	return 1;
}

int nguyento(int n){
	if (n < 2) return 0; //1 ko phai la so nguyen to
	for(int i = 2 ; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
}

int main(){
	
	int a;
	scanf("%d",&a);
	int cnt = 0;
	for(int i = 2 ; i <= a; i++){
		if(nguyento(i) && check(i) ){
			printf("%d ",i);
			cnt ++;	
		} 
	}
	printf("\n%d", cnt);
	return 0;
}
