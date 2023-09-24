#include <stdio.h>

int main(){
    int t, n, i, j, k, sum, min;
    scanf("%d", &t);
    for(k=1; k<=t; k++)
    {
        scanf("%d", &n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                sum = a[i-1] + a[j-1] + j - i;
                if(j==2)
                {
                    min = sum;
                }
                if(min>sum)
                {
                    min = sum;
                }
            }
        }
        printf("%d\n", min);
    }

    return 0;
}
