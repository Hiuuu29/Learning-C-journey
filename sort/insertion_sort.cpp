#include<stdio.h>
#include<math.h>
/* sap xep chen : insert sort
Y tuong : O moi buoc se chen cac ptu dang xet vao day cac ptu da dc sap xep truoc do
do phuc tap O(n^2)
*/

void insert(int a[], int n){
	for (int i = 1; i < n ; i++){
		// chen ptu a[i] vao doan [0, i-1] sao cho van thanh doan tang dan
		int pos = i - 1, value = a[i];
		// value la gtri lay ra de so sanh, pos la cac index cua cac gtri dc so sanh voi value, i la index dang lay ra de so sanh
		while(pos >= 0 && value < a[pos]){ // chung nao vi tri (index) con hop le va gtri con nho hon gtri cua index so sanh
			a[pos + 1] = a[pos]; // day gtri nam o vi tri index i-1 len gtri o i-1 = gtri o i
			--pos; // sau khi so sanh voi gtri co index i-1 xong tiep tuc i-2 cho den khi dieu kien sai
		}
		a[pos + 1] = value;
	}
}
	

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	insert(a,n);
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
}
