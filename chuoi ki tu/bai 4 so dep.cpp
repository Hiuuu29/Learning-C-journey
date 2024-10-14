#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
// mot so dc coi la so dep neu 2 so lien ke cua no chi lech dung 1 don vi

int sodep(char c[]){
	for(int i = 1; i < strlen(c); i++){
		if( abs(c[i] - c[i-1]) != 1)
			return 0;
	}
	return 1;
}

int main(){
	
	char c[100];
	gets(c);
	int cnt = 0;
	if(sodep(c)) printf("YES");
	else printf("NO");
	return 0;
}
