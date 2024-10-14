#include<stdio.h>
#include<math.h>
/* thuat toan sap xep tron (merge sort)
Y tuong : chia nho mang cho den khi mang chi co 1 ptu o moi day con. Sau do dung thao tac tron de tron cac day con do lai cho den khi
dc day ban dau
O(nlogn)
*/

// thao tac tron : tron 2 day da tang dan sao cho tao thanh 1 day van tang dan O(n+m) (n va m la so luong ptu trong 2 mang)
// so sanh value o 2 mang tu index [0,n-1] ptu nao nho hon thi in ra dong thoi + index cua mang chua ptu do len

//********************************************************************************************************
/* giai thuat : b1 chia mang thanh 2 cho den khi mang chi con co 1 gtri. vd: 8 -> 4 -> 2 -> 1. Sau do bat dau tron cac day voi nhau
bang thao tac tron o cmt tren. 
*/

//tron cac ptu tu chi so left -> mid, tu mid + 1 -> right
//thanh cac ptu tang dan
void merge(int a[], int l, int m, int r){
	// tam thoi luu cac ptu tu chi so left -> mid vao 1 mang, tu mid + 1 -> right vao 1 mang
	int n1 = m - l + 1, n2 = r - m; 
	int x[n1], y[n2];
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
		scanf("%d", &a[i]);
	}
	merge_sort(a,0,n-1);
	for(int i = 0; i < n; i++){
		printf("%d ",a[i]);
	}
	
	
	
	return 0;
}
