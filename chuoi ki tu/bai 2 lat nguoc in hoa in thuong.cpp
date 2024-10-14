#include<stdio.h>
#include<string.h>
#include<ctype.h>

void latnguoc(char c[]){
	int l = 0; int r = strlen(c) - 1;
	while(l<=r){
		char tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		++l; --r;
	}
}

void inhoa( char c[] ){
	for(int i = 0; i < strlen(c); i++){
		if (c[i] > 96 && c[i] < 123)
		c[i] -= 33;
	}
}

void inthuong(char c[]){
	for(int i = 0; i < strlen(c); i++){
		c[i] = tolower(c[i]);
	}
}

int main(){
	
	char c[10000];
	gets(c);
	latnguoc(c);
	printf("%s\n",c);
	latnguoc(c);
	inhoa(c);
	printf("%s\n",c);
	inthuong(c);
	printf("%s\n",c);
	return 0;
}
