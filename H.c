#include <stdio.h>

int main(){
    int i, n, count;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
            b[n-1-i] = a[i];
    }
    for(i=0; i<n; i++){
            if(a[i] != b[i]){
                count++;
            }
    }
    if(count == 0)
        printf("YES");
    else
        printf("NO");


    return 0;
}
