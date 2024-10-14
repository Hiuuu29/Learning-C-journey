#include<stdio.h>
#include<math.h>
/* so dc coi la dep khi :  no chia het cho 1 so nguyen to va chia het cho ca binh phuong so nguyen to do
liet ke cac so nhu vay trong doan tu a den b
*/

// cach 2 kiem tra so mu, neu so mu >= 2 thi chac chan chia het
int check2(int n){
	if(n < 2) return 0;
	for(int i =2 ; i <= sqrt(n); i++){
		if(n%i == 0){
			int mu = 0;
			while(n%i ==0){
				mu++;
				n/=i;
			}
			if(mu >= 2) return 1;
		}
	}
	return 0;
}

int main(){
	
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\ncach 2\n");
	for (int i = a; i <= b; i++){
		if(check2(i)) printf("%d ",i);
	}
	
	return 0;
}
