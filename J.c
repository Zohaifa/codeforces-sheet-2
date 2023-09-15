#include <stdio.h>

int main(){
    int n, i, min, count = 0;

    scanf("%d", &n);
    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    min = a[0];
    for(i=0; i<n; i++){
        if(min>a[i]){
            min = a[i];

        }
    }
    for(i=0; i<n; i++){
        if( a[i] == min ){
            count++;
        }
    }
    if(count%2 != 0){
        printf("Lucky");
    }
    else
        printf("Unlucky");

    return 0;
}
