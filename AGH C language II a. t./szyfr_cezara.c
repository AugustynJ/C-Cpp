#include <stdio.h>

int main(void) {
    char T[100], RES[100];
    int n = 0, rotacja = 256;
    scanf("%s", T);
    for(int i=0; T[i] != NULL; i++){
        int sign = (int)(T[i]);
        if(sign >= 65 && sign <= 90) sign = 65 + ((sign-65+rotacja)%26);
        else if(sign >= 97 && sign <= 122) sign = 97 + ((sign-97+rotacja)%26);
        RES[i] = (char)(sign);
    }
    for(int i=0; RES[i] != NULL; i++) printf("%c", RES[i]);
    return 0;
}