#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// tinh tong cac chu so xuat hien trong chuoi ki tu
int main(){
	
	char c[100];
	gets(c);
	int cnt = 0;
	for(int i = 0; i < strlen(c); i++){
		if(isdigit(c[i])){ // neu no la so 
			cnt += c[i] - '0'; // doi tu ki tu sang so
		}
	}
	printf("%d", cnt);
	return 0;
}
