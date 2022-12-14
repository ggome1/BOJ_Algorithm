#include <stdio.h>

int w[21][21][21];

void fill_w(){
    for(int i=0; i<21; i++){
        for(int j=0; j<21; j++){
            for(int k=0; k<21; k++){
                if(i<=0 || j<=0 || k<=0)
                    w[i][j][k] = 1;
                else if(i<j && j<k)
                    w[i][j][k] = w[i][j][k-1] + w[i][j-1][k-1] - w[i][j-1][k];
                else
                    w[i][j][k] = w[i-1][j][k] + w[i-1][j-1][k] + w[i-1][j][k-1] - w[i-1][j-1][k-1];
            }
        }
    }
    return;
}

void print_w(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0) printf("w(%d, %d, %d) = %d\n", a, b, c, 1);
    else if(a > 20 || b > 20 || c > 20)
    {
        printf("w(%d, %d, %d) = %d\n", a, b, c, w[20][20][20]);
    }
    else printf("w(%d, %d, %d) = %d\n", a, b, c, w[a][b][c]);
    return;
}

int main(void)
{
    int i;
    int a;
    int b;
    int c;
    i = -1;
    fill_w();
    
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a == -1 & b == -1 && c == -1) break;
        print_w(a, b, c);
    }
    return (0);
}