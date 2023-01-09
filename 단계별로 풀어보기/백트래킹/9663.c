#include <stdio.h>

int n;
int vx[16];
int vy[16];

int abs(int n)
{
    return n >= 0 ? n : -(n);
}

int bt(int x, int y)
{
    int i;
    i = -1;

    while(++i < y)
    {
        if(x == vx[i]) return 0;
        if(y == vy[i]) return 0;
        if(abs(x - vx[i]) == abs(y - vy[i])) return 0;
    }

    if(y == n - 1)
    {
        return 1;
    } 

    vx[y] = x;
    vy[y] = y;

    int r;
    i = -1;
    r = 0;
    while(++i < n)
    {
        r += bt(i, y + 1);
    }
    return r;


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
    printf("%d\n", count);
}