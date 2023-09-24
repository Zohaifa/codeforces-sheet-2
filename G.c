#include <stdio.h>

int main()
{   int i, j, n, same=1;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0, j=(n-1); i<n, j>0; i++, j--){
        if(a[i] != a[j]){
            same =0;
            break;
        }
    }
    if(same == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
