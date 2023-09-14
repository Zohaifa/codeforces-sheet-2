#include <stdio.h>

int main(){
    int i, n, d;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d", &d);
        if(d>0){
            ara[i] = 1;
        }
        else if(d<0){
            ara[i] = 2;
        }
        else{
            ara[i] = 0;
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", ara[i]);
    }
    return 0;
}
