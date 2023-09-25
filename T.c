#include <stdio.h>
#include<math.h>

int main(){
    int n, i, j, dia1=0, dia2=0;
    scanf("%d", &n);
    int a[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        dia1+=a[i][i];
        dia2+=a[i][n-1-i];
    }
    int sum = abs(dia1 - dia2);
    printf("%d\n", sum);

    return 0;
}
