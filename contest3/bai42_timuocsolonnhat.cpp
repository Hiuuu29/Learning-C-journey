#include<stdio.h>
#include<math.h>
/*
tim uoc so nguyen to lon nhat cua 1 so nguyen duong
output dong :
1 so luong test case T
2 T dogn tiep theo : cac test case moi case tren 1 dong
*/

int find(int n){
	if(n < 2) return 1;
	int res;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0){
			res = i;
			while(n % i == 0)
			n /= i;
		}
	}
	// cac so nhu la 16 thi trong vong lap thi n se chia cho den khi n = 1 nen dieu kien o ngoai sai 
	if(n > 1) // so con lai luon la so lon nhat
		res = n;
	return res;
	
}



int main(){
	
	int n,t;
	scanf("%d",&t);
	for(int i = 1 ; i <= t; i++){
		int n;
		scanf("%d",&n);
		printf("%d\n", find(n));
	}
	
	return 0;
}
