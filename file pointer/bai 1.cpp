#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int nguyento(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return 0;
	}
	return n > 1;
}

int cmp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

int main(){

	FILE *f1,*f2;
	f1 = fopen("28tech_number.txt", "r"); // file chua khong qua 10000 so nguyen

	if (f1 == NULL) return 0;

	int n;
	int a[10000], idx = 0;

	f2 = fopen("28tech_prime.txt", "w");

	while(fscanf(f1,"%d", &n) != -1){
		if(nguyento(n)){
			a[idx] = n;
			++idx;
		}
	}
	qsort(a,idx,sizeof(int),cmp);
	for (int i = 0; i < idx; ++i)
	{
		fprintf(f2,"%d ",a[i]);
	}

	fclose(f2);
	return 0;
}