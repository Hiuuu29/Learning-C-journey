#include<stdio.h>
#include<math.h>
/* tim so luong cac so khac nhau trong mang
SU DUNG MOT MANG DANH DAU CO DO LON RAT LON VD: A[1000001] -INDEX CHAY TU 0-1000000
O MANG DANG XET VD B[5] = {1,2,3,2,5} CHO A[1] = 1, A[2] =1, A[3] = 1, A[2] = 1, A[5] = 1 DANH DAU CAC SO DA XUAT HIEN
*************************** LUU Y KHI GTRI CAC PTU QUA LON >1E6 THI KO SD CACH NAY DC *********************************
*********************************** gtri trong mang phai > 0 **********************************
*/
int b[1000001] = {0}; // chi can o ben ngoai main thi cac ptu deu = 0 nen ko can {0}
int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	int max = -1e9; // bien de toi uu
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
		b[ a[i] ] = 1;
		if(a[i] > max) max = a[i];
	}

	int cnt = 0;
	for(int i = 0; i <= max; i++){
		if( b[i] != 0 )
		cnt++;
	}
	printf("%d", cnt);
	
	return 0;
}
