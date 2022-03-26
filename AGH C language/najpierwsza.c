// Check if sequence digits of prime number is nondecrasing

#include <stdio.h>
int prime(int n){                       // Check if number is prime
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    for (int i=2; i*i<=n; i++)
        if(!(n%i)) return 0;
    return 1;
}

int the_best_prime(int i){              // Check if digits are constants or rising
    while(i > 10){
        if(i%10 < ((i%100-i%10)/10)) return 0;
        i -= i%10;
        i /= 10;
    }
    return 1;
}

int main(void){
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        if(prime(i) && the_best_prime(i))
            printf("%d ", i);
    printf("\n");
    return 0;
}