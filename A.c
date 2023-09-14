#include <stdio.h>
#include <math.h>

int main(){
    int i, n;
    long long int sum = 0;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++){
        scanf("%d", &ara[i]);
        sum = sum +ara[i];
    }
    sum = abs(sum);
    printf("%lld", sum);

    return 0;
}
