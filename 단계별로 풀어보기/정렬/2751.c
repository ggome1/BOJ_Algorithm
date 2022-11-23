#include <stdio.h>
#define MAX_SIZE 1000001
void merge(int arr[], int left, int middle, int right);
void ms(int arr[], int left, int right);

int sort[MAX_SIZE];
int arr[MAX_SIZE];
int main(){
  int i = -1;
  
  int n;
  scanf("%d", &n);
  
  while(++i < n){
    scanf("%d", &arr[i]);
  }

  
  ms(arr, 0, n-1);
  
  // 정렬 결과 출력
  for(i=0; i<n; i++){
    printf("%d\n", arr[i]);
  }
  return 0;
}

void merge(int arr[], int left, int middle, int right)
{
    int i = left;
    int j = middle + 1;
    int k = left;
    while(i <= middle && j <= right){
        if(arr[i] <= arr[j]){
            sort[k++] = arr[i++];
        }
        else if(arr[i > arr[j]]){
            sort[k++] = arr[j++]; 
        }
    }

    if(i > middle){
        for(int t = j; t <= right; t++){
            sort[k++] = arr[t];
        }
    }
    else{
        for(int t = i; t <= middle; t++){
            sort[k++] = arr[t];
        }
    }
    for(int t = left; t <= right; t++) arr[t] = sort[t];
}

void ms(int arr[], int left, int right)
{
    if(left < right){
        int middle = (left + right) / 2;
        ms(arr, left, middle);
        ms(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}