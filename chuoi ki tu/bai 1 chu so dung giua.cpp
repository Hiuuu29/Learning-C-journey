#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	
	char c[100];
	gets(c);
	if(strlen(c) % 2 == 0)
	printf("NOT FOUND");
	else
	printf("%c", c[strlen(c)/2]);
	
	return 0;
}
