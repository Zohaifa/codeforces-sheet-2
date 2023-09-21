#include <stdio.h>


int main(){
    int n, i;
    long long int j, c = 0, b = 1;
    scanf("%d", &n);
    long long int a[n];
    a[0] = 0;
    a[1] = 1;
    for(i=2; i<=n; i++){
        j = c + b;
        c = b;
        b = j;
        a[i] = j;
    }
    printf("%lld\n", a[n-1]);
    return 0;
}





