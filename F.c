#include <stdio.h>

int main(){
    int i, n, d, max = 10000;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
            b[n-1-i] = a[i];
    }
    for(i=0; i<n; i++){
        printf("%d ", b[i]);
    }

    return 0;
}
