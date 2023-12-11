#include <stdio.h>

int main(){
    int a[110][110], m, n, i, j;
    scanf("%d%d", &m, &n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=(n-1); j>=0; j--){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
