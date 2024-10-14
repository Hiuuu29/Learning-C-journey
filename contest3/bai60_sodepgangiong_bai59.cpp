#include<stdio.h>
#include<math.h>
/* so dc coi la dep khi :  no chia het cho 1 so nguyen to va chia het cho ca binh phuong so nguyen to do
liet ke cac so nhu vay trong doan tu a den b
khac bai 59 o cho vd 28 =2x2x7 : 28%2==0 28%2^2==0 chap nhan
bai 60 28%7 == 0 28%7^7 != 0 ko chap nhan
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
			if(mu < 2) return 0;
		}
	}
	if(n > 1) return 0;
	else return 1;
}

int main(){
	
	int a,b;
	scanf("%d%d",&a,&b);
	printf("cach 2\n");
	for (int i = a; i <= b; i++){
		if(check2(i)) printf("%d ",i);
	}
	
	return 0;
}
