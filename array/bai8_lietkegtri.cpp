#include<stdio.h>
#include<math.h>
/* liet ke cac gtri, moi gtri chi liet ke 1 lan, theo thu tu xuat hien
*/
int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	printf("%d ",a[0]); // gtri dau luon xuat hien
	for(int i = 1;i < n; i++){ // ktra tu gtri thu 2
		int co = 0;
		for(int j = i - 1; j >= 0; j--){ //  kiem tra gtri thu 2 do tro ve truoc xem co xuat hien chua
			if(a[i] == a[j]) co = 1; // co gtri bang roi
		}
		if (co == 0)
		printf("%d ",a[i]);
	}

	
	return 0;
}
