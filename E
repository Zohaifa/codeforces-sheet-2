#include <stdio.h>

int main(){
    int i, n, d, max = 10000;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(i=0; i<n; i++){
        if(ara[i] < max){
            max = ara[i];
            d = i+1;
        }
    }
    printf("%d %d\n", max, d);

    return 0;
}
