#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    long long gt = 1;
    double res = 0;
    for(int i = 1; i <= n; i++){
        res += (double) 1 / gt;
        gt *= (i + 1);  // Correct the factorial calculation
    }
    printf("%.4lf\n", res);
    return 0;
}

