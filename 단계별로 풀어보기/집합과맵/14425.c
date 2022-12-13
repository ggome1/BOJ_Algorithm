#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char    name[10001];
}charraw;

int count = 0;

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int binarysearch(charraw* arr, int size, char* key) 
{
	int left = 0, right = size - 1, mid;
	while (left <= right) 
    {
		mid = (left + right) / 2;
		if (arr[mid].name < key) left = mid + 1;
		else if (arr[mid].name > key) right = mid - 1;
		else
        {
            count++;
            return 1;
        } 
 	}
    return 0;
}

int main()
{
    int     n;
    int     m;
    scanf("%d %d", &n, &m);
    int i;
    charraw c_raw1[n];
    charraw c_raw2[m];
    i = -1;
    while(++i < n)
        scanf("%s", c_raw1[i].name);
    i = -1;
    while(++i < m)
        scanf("%s", c_raw2[i].name);
    
    int c_raw_size = sizeof(c_raw2) / sizeof(c_raw2[0]);

    qsort(c_raw2, c_raw_size, sizeof(c_raw2[0]), compare);
    i = -1;
    while(++i < m)
    {
        printf("--%s\n", c_raw2[i].name);
    }
    i = -1;
    while(++i < n)
    {
        binarysearch(c_raw2, sizeof(c_raw2), c_raw1[i].name);
    }
    printf("%d\n", count);
}