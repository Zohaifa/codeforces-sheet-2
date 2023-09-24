#include <stdio.h>

int main()
{   int i, j, m, n, x, flag=0;
    scanf("%d %d", &m, &n);
    int a[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(x == a[i][j]){
                flag = 1;
                break;
            }
        }
        if(flag==1) {break;}
    }
    if(flag==1)
        printf("will not take number\n");
    else
        printf("will take number\n");

    return 0;
}


