#include<stdio.h>
#include<math.h>
/* tim gtri co so lan xuat hien nhieu nhat trong mang, neu co nhieu gtri co cung so lan, lay gtri xuat hien truoc o trong mang
*/
int dem[1000001] = {0};

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9;
	int tansuat = -1e9;
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
		dem[ a[i] ] ++;
		if(max < a[i]) max = a[i];// gtri de xet mang tansuat dem
	}
	int res;
	for(int i = 0; i < n ; i++){
		// in ra a[i] dau tien va tan suat
		if( tansuat < dem[i] ){
			tansuat = dem[i]; //luu tan suat lon nhat
			res = a[i]; // luu gtri ptu xuat hien dau tien
		}
	}
	printf("%d %d", res, tansuat);
	
	return 0;
}
