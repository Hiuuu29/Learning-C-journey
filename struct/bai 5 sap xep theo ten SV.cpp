#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

// xay dung danh sach sinh vien va in ra thu khoa va ai dau ai rot
struct sinhvien{
	char ten[50];
	char ngay[10];
	char pos[50];
	float gpa;
	int stt;
};
typedef struct sinhvien sv;

void in(sv a){
	printf("%s %s %s %.2f\n",a.ten, a.ngay, a.pos, a.gpa);
}

int cmp(const void *a, const void *b){
	sv* x = (sv*) a;
	sv* y = (sv*) b;
	if(strcmp(x->ten,y->ten) != 0)
		return strcmp(x->ten,y->ten);
	else 
		return x->stt - y->stt;
	 
}

int main(){
	
	int n; 
	scanf("%d",&n);
	sv a[n];
	for(int i = 0; i < n; i++){
		getchar();
		fgets(a[i].ten, 50, stdin); 	a[i].ten[strlen(a[i].ten) - 1] = '\0';
		fgets(a[i].ngay, 10, stdin); 	a[i].ngay[strlen(a[i].ngay) - 1] = '\0';
		fgets(a[i].pos, 50, stdin);		a[i].pos[strlen(a[i].pos) - 1] = '\0';
		scanf("%f",&a[i].gpa);
		a[i].stt = i;
	}
	qsort(a, n, sizeof(sv), cmp);
	for(int i= 0; i < n; i++){
		in(a[i]);
	}
	
	return 0;
}
