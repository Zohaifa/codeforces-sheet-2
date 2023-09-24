#include <stdio.h>

int digit_maker(char s)
{
    int i;
    if( s == '0') i =0;
    else if( s == '1') i =1;
    else if( s == '2') i =2;
    else if( s == '3') i =3;
    else if( s == '4') i =4;
    else if( s == '5') i =5;
    else if( s == '6') i =6;
    else if( s == '7') i =7;
    else if( s == '8') i =8;
    else if( s == '9') i =9;
    return i;
}

int main(){
    int n, i, d, sum =0;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);
    s[n] = '\0';
    for(i=0; i<n; i++){
        d = digit_maker(s[i]);
        sum += d;
    }
    printf("%d\n", sum);

    return 0;
}
