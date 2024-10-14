#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// them dau phay vao sau moi 3 so vd 12335234 12,335,234
int main(){
	
	char res[10005]; // tao mot mang khac de chua cac so co dau phay
	char c[100];
	gets(c);
	int cnt = 0; int index = 0;
	for(int i = strlen(c) - 1; i >= 0; i--){
		++cnt;
		res[index] = c[i]; //  lay cac so tu mang dau sang mang co dau phay
		index ++;
		if(cnt % 3 == 0 && i != 0){
			res[index] = ',';
			++index;
		}
	}
	for(int i = strlen(res) - 1; i >= 0; i--){
		printf("%c", res[i]);
	}
	return 0;
}
