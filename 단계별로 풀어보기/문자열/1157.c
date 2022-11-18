#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000001];
    int count[26]={0};
    int same = 0;
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++) str[i] = toupper(str[i]);
    for(int i = 0; i < strlen(str); i++) count[str[i]-65]++;
    int max = count[0];
    for(int i = 1; i<26; i++) if(count[i]>max) max = count[i];
    for(int i = 0; i<26; i++) if(count[i]==max) same++;
    if(same == 1){
        for(int i=0;i<26; i++){
            if(count[i]==max){
                printf("%c", i+65); 
                break;
            } 
        }
    }
    else printf("?");
}