#include<stdio.h>
#include<math.h>
/* xoa ptu x neu gtri x co xuat hien trong mang
not found neu mang ko co gtri x
xoa 1 ptu thi cac ptu ben phai cua no phai dich chuyen ve
*/

int xoa(int n, int x){
	if(n == x){
		return 1;
	}
	return 0;
}

int main(){
	
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	int check = 0;
	for(int i = 0; i < n; i++){
		if ( xoa(a[i], x) ){
			for(int j = i; j < n; j++){
				a[j] = a[j + 1];
			}
			n--;
			check = 1;
		}
	}
	if(check == 0) printf("not found");
	else {
		for(int i = 0; i < n; i++){
			printf("%d ", a[i]);
		}
	}
	
	
	return 0;
}
