#include <stdio.h>


int main(){
    int n, i, j, count = 0, count2 = 0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    do{     j= 0;
            count = 0;
    for(j=0; j<n; j++)
    {
        if(a[j]%2 == 0){
            a[j] = a[j]/2;
            count++;
        }
        else
            break;
    }
    count2++;
    }while(count == n);

    printf("%d\n", count2-1);
    return 0;
}





