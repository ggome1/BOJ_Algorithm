#include <stdio.h>
#include <math.h>

int main(void)
{
    int k;
    int i;
    int n;
    int m;
    int res;
    int j;
    int temp_n;
    int temp_m;

    scanf("%d", &k);
    i = -1;
    while(++i < k)
    {
        res = 1;
        scanf("%d %d", &n, &m);
        temp_n = n;
        temp_m = m;
        j = -1;
        while(++j < n) res *= temp_m--;
        j = -1;
        while(++j < n) res /= temp_n--;
        printf("%d\n", res);
    }
    return (0);
}