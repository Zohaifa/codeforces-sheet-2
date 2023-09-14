#include <stdio.h>

int main(){
    int i, n, d;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++){
        if(ara[i]<=10){
            printf("A[%d] = %d\n", i, ara[i]);
        }
    }
    return 0;
}
