#include <stdio.h>

int main(void)
{
    long long int arr[101];
    int n;
    int i;
    scanf("%d", &n);
    arr[0] = 9;
    i = 0;
    while(++i < n)
    {
        arr[i] = ((arr[i - 1] - (i + 1)) * 2 + i + 2) % 1000000000;
    }
    printf("%lld\n", arr[n - 1]);
    return (0);
}