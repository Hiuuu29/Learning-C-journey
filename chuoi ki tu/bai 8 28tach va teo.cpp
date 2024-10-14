#include<stdio.h>
#include<string.h>
#include<ctype.h>
// xoa cac ki tu trong chuoi co chua cac ki tu trong 28tech, neu sau khi xoa ko con ki tu nao thi in ra empty
int main(){
	
	char d[10005];
	char c[10005];
	gets(c);
	int idx = 0;
	for(int i = 0; i < strlen(c); i++){
		if( c[i] != '2' && c[i] != '8' && c[i] != 't' && c[i] != 'e' && c[i] != 'c' && c[i] != 'h'){
			d[idx] = c[i];
			++idx;
		}
	}
	if(strlen(d)){
		printf("%s",d);
	}
	else
		printf("EMPTY");
	
	return 0;
}
