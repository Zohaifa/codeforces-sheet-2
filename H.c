#include <stdio.h>

int main(){
    int n, min, i, j;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                min=a[j];
                a[j]=a[i];
                a[i] = min;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
