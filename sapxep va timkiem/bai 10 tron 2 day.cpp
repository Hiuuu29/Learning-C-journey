#include<stdio.h>
#include<math.h>
/* tron 2 day da dc sap xep tang dan B va C de duoc day A tang dan
input b,c sp ptu 2 day B va C
b1 b2 b3,... c1 c2 c3...
out put thu tu tron, neu b va c co ptu giong nhau thi in ra cua b truoc
*/

int main(){
	
	int b,c;
	scanf("%d%d",&b,&c);
	int B[b],C[c];
	for(int i = 0; i < b; i++){
		scanf("%d", &B[i]);
	}
	for(int i = 0; i < c; i++){
		scanf("%d", &C[i]);
	}
	int j = 0, i = 0;
	while(i < b && j < c){
		if(B[i] <= C[j]){
			printf("b%d ", i+1); ++i;
		}
		else{
			printf("c%d ", j+1); ++j;
		}
	}
	while(i < b){
		printf("b%d ", i+1); ++i;
	}
	while(j < c){
		printf("c%d ", j+1); ++j;
	}
	
	
	
	return 0;
}
