#include <stdio.h>
#include <stdlib.h>

const char* multiply(char first[], char second[]){
    int product[100] = {0};
    int l, i=0, j=0, k, A, B, C;
    while(first[i] != '\0') i++;
    A = i;
    while(second[j] != '\0')j++;
    B = j;
    for(i = 0; i <= (A-1)/2; i++){
        k = first[i];
        first[i] = first[A-1-i];
        first[A-1-i] = k;
    }
    for(i = 0; i <= (B-1)/2; i++){
        k = second[i];
        second[i] = second[B-1-i];
        second[B-1-i] = k;
    }
    for(i = 0; i < A; i++){
        for(j = 0; j < B; j++){
            C = ((int)first[i]-48) * ((int)second[j]-48);
            k = i + j;
            product[k] += C;
            C = product[k];
            for(l = 0; product[k+l] >= 10; l++){
                product[k+l] = product[k + l] % 10;
                product[k+l+1] = C/10 + product[k+l+1];
                C = product[k+l+1];
            }
        }
    }
    i = 99;
    while(product[i] == 0)i--;
    j = i + 1;

    for(i = 0; i <= (j-1)/2; i++){
        k = product[i];
        product[i] = product[j-1-i];
        product[j-1-i] = k;
    }

    char* res = (char*)malloc(j+sizeof(char));
    for(int i = 0; i < j; i++)
        res[i] = (char)(product[i]+48);
    
    res[j] = '\0';
    return res;
}

const char* str_conv(int a){
    char* res = (char*)malloc(10*sizeof(char));
    int j = 0;
    char k;
    while(a){
        res[j] = (char)(a%10+48);
        a = a/10;
        j++;
    }
    for(int i = 0; i <= (j-1)/2; i++){
        k = res[i];
        res[i] = res[j-1-i];
        res[j-1-i] = k;
    }
    res[j] = '\0';
    return res;
}

int main() {
    char str1[] = "1";
    char* result;
    char* prev = str1;
    char* curr;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        curr = str_conv(i);
        result = multiply(prev, curr);
        prev = result;
    }
    puts(result);
    return 0;
}