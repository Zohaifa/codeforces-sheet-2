#include <stdio.h>


int main(){
    int n, i, min_pos=0, max_pos=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int min = a[0];

for(i=0; i<n; i++){
    if(a[i]>max){
        max = a[i];
        max_pos = i;
    }
    if(a[i]<min){
        min = a[i];
        min_pos = i;
    }
}
    a[min_pos] = max;
    a[max_pos] = min;

    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}





