#include <stdio.h>

int main(){
    int i, n, d, s;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d", &d);
        ara[i] = d;
    }
    scanf("%d", &s);
    for(i=0; i<n; i++){
        if(ara[i] == s){
            break;
        }
    }
    if(i<n)
    printf("%d\n", i);
    else
        printf("-1\n");
    return 0;
}
