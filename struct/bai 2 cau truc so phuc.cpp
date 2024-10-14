#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct sophuc{
	int thuc;
	int ao;
};
typedef struct sophuc sp;

int main(){
	
	sp a,b;
	scanf("%d%d%d%d", &a.thuc, &a.ao, &b.thuc, &b.ao);
	sp tong,hieu, tich;
	
	tong.thuc = a.thuc + b.thuc;
	tong.ao = a.ao + b.ao;
	
	hieu.thuc = a.thuc - b.thuc;
	hieu.ao = a.ao - b.ao;
	// nhan 2 so phuc
	tich.thuc = a.thuc * b.thuc - a.ao * b.ao;
	tich.ao = a.thuc * b.ao + a.ao * b.thuc;
	
	printf("%d %d\n%d %d\n%d %d",tong.thuc,tong.ao,hieu.thuc,hieu.ao,tich.thuc,tich.ao);
	
	return 0;
}
