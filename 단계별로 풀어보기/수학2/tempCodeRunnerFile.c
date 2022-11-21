#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int jud;
        int a=0;
        scanf("%d", &jud);
        if(jud/2 < 2){
            if(jud==1){
                a=1;
            }
        } 
        else for(int j = 2; j<jud/2; j++){
                if(jud%j==0){
                    a=1;
                    break;
                } 
        }
        if(a==0) count++;
    }
    printf("%d", count);
}