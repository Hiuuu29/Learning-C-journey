#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	char c[100];
	gets(c);
	for(int i = 0; i < strlen(c); i++){
		if(isdigit(c[i]))
			printf("%c",c[i]);
	}
	printf("\n");
	for(int i = 0; i < strlen(c); i++){
		if(isalpha(c[i]))
			printf("%c",c[i]);
	}
	
	return 0;
}
