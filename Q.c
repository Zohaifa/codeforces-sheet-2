#include <stdio.h>

int main()
{
    int t, n, i, j, k, b, l, count, descending;
    scanf("%d", &t);
    for(l=0; l<t; l++)
    {
        scanf("%d", &n);
        int a[n];
        count = 0;
        for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {   b = a[i];
                descending = 1;
                for(k=i; k<=j; k++)
                {
                    if(b<=a[k]){
                        b = a[k];
                    }
                    else
                    {
                        descending = 0;
                        break;
                    }
                }
                if(descending == 1)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
