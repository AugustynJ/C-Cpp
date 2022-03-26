// Check if number is perfect
// Perfect number is sum of its own divisiors (less than itself)
// For example 6 = 1+2+3, so 6 is perfect

#include <stdio.h>
int sum_d (int n) {               // Sum of divisiors
    int result = 0;
    for (int i=1; i<n; i++)
        if(!(n%i)) result += i;
    return result;
}

int doskonale[100];

int main(void){
    int n, sum=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        if(i == sum_d(i)){
            doskonale[sum] = i;
            sum += 1;
        }
    }
    printf("Liczb doskonalych w pzedziale jest %d: ", sum);
    for (int i=0; i<sum; i++) printf("%d ", doskonale[i]);
    printf("\n");
    return 0;
}

// Fun fact: in integeer range there's only a few perfect numbers:
// Formula for perfect number is 2^(p-1) * (2^p - 1), where is prime
// That's why there aren't a lot of perfect numbers
// Are there infinitely many perfect numbers?
