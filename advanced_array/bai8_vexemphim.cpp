#include<stdio.h>
#include<math.h>
/* co n nguoi mua ve xem phim. co cac to tien 100 50 25, ve xem phim la 25. Luc dau nhan vien ko co tien
neu ban theo dung thu tu dc khong
*/

int ve(int a[], int n){
	int cnt25 = 0;
	int cnt50 = 0;
	for(int i = 0; i < n; i++){ // xet tu nguoi dau den nguoi cuoi
		if(a[i] == 25) cnt25++;
		else if(a[i] == 50){
			if(cnt25 == 0)  return 0;
			cnt50++;
			cnt25--;
		}
		else{ //(a[i] == 100)
			if(cnt25 == 0 || (cnt25*25 + cnt50*50 < 75)) return 0;
			if(cnt50 != 0){
				--cnt50;
				--cnt25;
			}
			else{
				cnt25 -= 3;
			}
		}
	}
	return 1;
}

int main(){
	
	int n;// so nguoi
	scanf("%d", &n);
	int a[n];// so tien
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	// neu 25 thi ko can phai thoi
	// neu 50 thi it nhat phai co 1 nguoi 25 tra truoc
	// neu 100 thi it nhat phai co 2 nguoi 25 50 tra truoc
	if(ve(a,n)) printf("YES");
	else printf("NO");
	return 0;
}
