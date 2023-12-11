#include <stdio.h>

int main(){
    char a[110][110], b;
    int m, n, i, j, x, y;
    scanf("%d%d", &m, &n);
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf(" %c", &a[i][j]);
        }
    }
    scanf("%d%d", &x, &y);
    x--; y--;
    if(a[x][y-1] != '.' && a[x][y+1] != '.' && a[x-1][y] != '.' && a[x-1][y-1] != '.' && a[x-1][y+1] != '.' && a[x+1][y] != '.' && a[x+1][y-1] != '.' && a[x+1][y+1] != '.'){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }

    return 0;

}
