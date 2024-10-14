#include<stdio.h>
#include<string.h>
#include<ctype.h>

int dem[256] = {0};

int main(){
	
	char c[100];
	gets(c);
	for(int i = 0; i < strlen(c); i++){
		if(dem[c[i]] != 0){
			printf("%c",c[i]);
			return 0;
		}
		dem[c[i]] = 1;
	}
	printf("NONE");
	
	return 0;
}
