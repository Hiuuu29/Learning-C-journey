#include<stdio.h>
#include<string.h>
#include<ctype.h>
// cho chuoi S va so nguyen k, chen chu "28tech vao vi tri k"
int main(){
	
	char c[10005];
	gets(c);
	int k;
	scanf("%d",&k);
	for( int i = 0; i < k; i++){
		printf("%c",c[i]);
	}
	printf("28tech");
	for(int i = k; i < strlen(c); i++){
		printf("%c",c[i]);
	}
	
	
	return 0;
}
