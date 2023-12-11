#include <stdio.h>

int main(){
    int a[10010], b[10010], m, n, i, j;
    scanf("%d%d", &m, &n);
    //input
    for(i=0; i<m; i++){
        scanf("%d", &a[i]);
    }for(i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    //checky wecky
    j=0;
    for(i=0; i<m; i++){
        if(a[i] == b[j]){
            j++;
        }
    }
    if(j == n){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

}
