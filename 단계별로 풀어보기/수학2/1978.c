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
            if(jud!=1){
                count++;
            }
        } 
        else {
            for(int j = 2; j<jud/2; j++){
                if(jud%j!=0){
                    
                } 
            }
        }
        if(a==0) count++;
    }
    printf("%d", count);
}

// https://jm-park.github.io/algorithm/2018/08/06/Prime-Number(%EC%86%8C%EC%88%98)-%ED%8C%90%EB%B3%84%EB%B2%95-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98.html
// 다시 해봐요!