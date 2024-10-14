#include<stdio.h>
#include<math.h>
/* thanh pho nam tren truc co toa do a[0] a[1] ,..  cac toa do nay ko trung nhau
Muon xay dung 1 doan duong noi 2 thanh pho gan nhau nhat, tinh thu chieu dai va co bao nhieu cap co tiem nang xay dungg nhat
*/
// output c va d la khoang cach ngan nhat giua 2 thi tran va so luong cap thi tran co cung khoang cach nay
// luu y toa do cac thanh pho nay ko sap xep lien tuc

void merge(int a[], int l, int m, int r){
	// tam thoi luu cac ptu tu chi so left -> mid vao 1 mang, tu mid + 1 -> right vao 1 mang
	int n1 = m - l + 1, n2 = r - m; 
	long long x[n1], y[n2];
	// dua cac ptu tu chi so l -> m vao mang x 
	for(int i = 0; i < n1; i++){
		x[i] = a[l + i];
	}
	// tuong tu voi mang y dua tu mid + 1 -> r
	for(int i = 0; i < n2; i++){
		y[i] = a[m + 1 + i];
	}
	//tron 2 mang x,y gan lai cho mang a[l + r]
	int index = l;
	int i = 0, j = 0;
	while(i < n1 && j < n2){
		// so sanh 2 mang con x,y
		if(x[i] <= y[j]){
			a[index++] = x[i++]; // gan gtri cua mang con vao mang chinh a[] sau do tang index len
		}
		else{
			a[index++] = y[j++];
		}
	}
	// tat ca cac gtri con lai, khi 1 mang con da het, so sanh va gan cac gtri o mang con con lai vao
	while (i < n1){
		a[index++] = x[i++];
	}
	while (j < n2){
		a[index++] = y[j++];
	}
}

// thuat toan merge sort se goi de quy 
void merge_sort(int a[], int l, int r){
	if(l < r){
		int m = (l+r)/2;
		merge_sort(a,l,m); // goi de quy nua ben trai de chia doi den khi con 1 ptu
		merge_sort(a,m + 1,r); // goi de quy nua ben phai de chia doi den khi con 1 ptu (cho den khi l >= r)
		merge(a,l,m,r);
	}
}

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
		a[i] *= a[i];
	}
	// sap xep cac thanh pho tu nho den lon truoc khi tinh toan khoang cach
	merge_sort(a,0,n-1);
	for(int i = n-1; i >= 2 ; i--){ // >=  2 do can toi thieu 3 so (3 canh) de tao thanh 1 tam giac vuong
		int l =0, r = i - 1;
		while(l < r){
			long long sum = a[l] +a[r];
			if(sum == a[i]){
				printf("YES");
				return 0;
			}
			else if (sum < a[i]){
				++l;
			}
			else r--;
		}
	}
	
	
	return 0;
}
