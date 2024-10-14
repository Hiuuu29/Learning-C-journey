#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

// xay dung danh sach sinh vien va in ra thu khoa va ai dau ai rot
struct sinhvien{
	char ten[50];
	char ngay[10];
	char pos[50];
	int toan,ly,hoa;
};
typedef struct sinhvien sv;

void in(sv a){
	printf("%s %s %s %d ",a.ten, a.ngay, a.pos, a.toan + a.ly + a.hoa);
}

void thukhoa(sv a[], int n, int max){
	printf("DANH SACH THU KHOA :\n");
	for(int i = 0; i < n; i++){
		int tong = a[i].toan + a[i].ly+a[i].hoa;
		if(tong == max){
			in(a[i]);
			printf("\n");
		}
	}
}

int main(){
	
	int n; 
	scanf("%d",&n);
	sv a[n];
	int max = -1e9;
	for(int i = 0; i < n; i++){
		getchar();
		fgets(a[i].ten, 50, stdin); 	a[i].ten[strlen(a[i].ten) - 1] = '\0';
		fgets(a[i].ngay, 10, stdin); 	a[i].ngay[strlen(a[i].ngay) - 1] = '\0';
		fgets(a[i].pos, 50, stdin);		a[i].pos[strlen(a[i].pos) - 1] = '\0';
		scanf("%d%d%d",&a[i].toan,&a[i].ly,&a[i].hoa);
		max = fmax( max, a[i].hoa + a[i].toan + a[i].ly);
	}
	thukhoa(a,n,max);
	printf("KET QUA XET TUYEN :\n");
	for(int i = 0; i < n; i++){
		in(a[i]);
		if(a[i].hoa + a[i].toan + a[i].ly >= 24) printf("DO\n");
		else printf("TRUOT\n");
	}
	
	return 0;
}
