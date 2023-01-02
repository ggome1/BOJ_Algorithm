#include <stdio.h>

int n;

int bt(int x, int y)
{

}

int main(void)
{
    int i;
    int count;
    scanf("%d", &n);
    i = -1;
    count = 0;
    while(++i < n)
    {
        count += bt(i, 0);
    }

}