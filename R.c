#include <stdio.h>

int main()
{   int i, j, n, perm;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i] == b[j]){
                b[j] = 0;
                perm = 1;
                break;
            }
            else{
                perm = 0;
            }
        }
        if(perm == 0)
            break;

    }


    if(perm == 1)
        printf("yes\n");
    else
        printf("no\n");


    return 0;
}

