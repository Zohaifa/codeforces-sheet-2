#include <stdio.h>


int main() {
    int t, n, i, j, k, l, max;
    scanf("%d", &t);
    for(l = 0; l < t; l++){
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(i=0; i<n; i++){
            for(j=i; j<n; j++){
                    max = a[i];
                    for(k = i; k<=j; k++){
                if(a[k]>max){
                    max = a[k];
                            }
                    }
                    printf("%d ", max);
                }
            }
            printf("\n");
        }
    return 0;
}
