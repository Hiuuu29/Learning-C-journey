#include<stdio.h>
#include<math.h>
/* liet ke cac gtri, moi gtri chi liet ke 1 lan, kem theo do la tan suat xuat hien cua no
*/
int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < n; i++){ // ktra tu gtri dau tien
		int co = 1; // xuat hien 1 lan
		for(int j = i - 1; j >= 0; j--){ //  kiem tra gtri thu 2 do tro ve 1 xem co xuat hien chua
			if(a[i] == a[j]){ 
			co = 0; break; // xuat hien nhieu lan
			}
		}
		if(co){ // neu a[i] xuat hien lan dau tien dem xem co bao nhieu
			printf("%d",a[i]);
			int dem = 1;
			for(int j = i + 1; j < n ; j++){ //  kiem tra gtri a[i] voi gtri tro ve truoc
				if(a[i] == a[j]) dem++;
			}
		printf(" %d\n",dem);	
		}	
	}

	
	return 0;
}
