// Check if the number is product of consecutive of two adjacent Fibbonacci's numbers

#include <stdio.h>
int T[1000000000];
int main(void){
    int a = 0, b = 1;
    while(a*b < 100000000){
        T[a*b] = 1;
        int tmp = a+b;
        a = b;
        b = tmp;
    }
    // for(int i=0; i<100000000; i++) if(T[i] == 1) printf("%d ", i);
    int n;
    scanf("%d", &n);
    if(T[n] == 0) printf("NO");
    else print("YES");
    return 0;    
}
