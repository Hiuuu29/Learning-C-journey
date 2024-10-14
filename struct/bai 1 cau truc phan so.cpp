#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct phanso{
	int tu;
	int mau;
};
typedef phanso ps;

int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b,a%b);
}

int lcm(int a, int b){
	return a/gcd(a,b) *b;
}

ps toigian(ps a){
	ps res;
	int uc = gcd( abs(a.tu), abs(a.mau) );
	res.tu = a.tu / uc;
	res.mau = a.mau / uc;
	
	return res;
}

ps tong(ps a, ps b){
	ps res;
	int mc = lcm( abs(a.tu), abs(a.mau) );
	res.tu = a.tu * mc / a.mau + b.tu * mc / b.mau;
	res.mau = mc; // mau chung
	
	return toigian(res);
}

ps hieu(ps a, ps b){
	ps res;
	int mc = lcm( abs(a.tu), abs(a.mau) );
	res.tu = a.tu * mc / a.mau - b.tu * mc / b.mau;
	res.mau = mc; // mau chung
	
	return toigian(res);
}

int main(){
	
	ps a,b;
	scanf("%d%d%d%d", &a.tu, &a.mau, &b.tu, &b.mau);
	a = toigian(a); b = toigian(b);
	printf("%d/%d\n%d/%d",a.tu,a.mau,b.tu,b.mau);
	ps t = tong(a,b), h = hieu(a,b);
	printf("\n%d/%d\n%d/%d",t.tu,t.mau,h.tu,h.mau);
	
	return 0;
}
