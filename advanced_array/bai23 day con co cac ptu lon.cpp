#include<stdio.h>
#include<math.h>
/* tim ra do dai cac day con lien tiep sao cho cac ptu trong day con khac cac ptu lien ke no
TH co nhieu day con co cung do dai in ra day con co tong lon nhat 
*/

int main(){
	
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int cnt = 1; // dem do dai day con
	int ans = 1; // gtri de ghi nhan mang con lon nhat, khi vong lap ket thuc thi so sanh cnt vs ans neu = nhau thi tim mang co tong lon nhat
	int sum = a[0], pos = 0;
	
	for(int i = 1; i < n - 1; i++){
		if( a[i] != a[i-1] ){
			cnt++;
			sum += a[i];	
		} 
		else {
			if(cnt > ans){
				ans = cnt;
				pos = i - cnt; // index mang con thu 2
			}
			else if (cnt == ans){
				pos = i - cnt;
				
			}
		}
	}
	if ( cnt != ans) {
		printf("%d", fmax(cnt,ans) );
	}
	else{
		for(int i = 0; i < cnt; i++){
			
		}
	}
	
	return 0;
}
