#include <stdio.h>
#include <stdlib.h>

typedef struct char_raw
{
    char name[1001];
}char_raw;

void binarysearch(char_raw* arr, int size, char* key, char_raw* arr2) 
{
	int left = 0, right = size - 1, mid;
    
	while (left <= right) 
    {
		mid = (left + right) / 2;
		if (strcmp(arr[mid].name, key) < 0) left = mid + 1;
		else if (strcmp(arr[mid].name, key) > 0) right = mid - 1;
		else
        {
        } 
 	}
    return;
}

int static compare (const void* first, const void* second)
{
    char_raw *pf = (char_raw*)first;
    char_raw *ps = (char_raw*)second;
    return strcmp(pf->name, ps->name);
}

int main()
{
    char_raw str;
    scanf("%s", &str.name);
}