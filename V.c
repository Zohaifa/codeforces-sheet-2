#include <stdio.h>

int main(){
    int a[100010], b[100010] = {0}, m, n, i, j;
    scanf("%d%d", &n, &m);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]<=m){
            b[a[i]-1]++;
        }
    }
    for(j=0; j<m; j++){
        printf("%d\n", b[j]);
    }

    return 0;

}
