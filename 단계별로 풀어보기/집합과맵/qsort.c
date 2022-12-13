#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr_size = sizeof(arr) / sizeof(int);
    qsort(arr, arr_size, sizeof(int), compare);
}