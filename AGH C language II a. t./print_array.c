#include <stdio.h>

int main(void){
    int n, k, rosnaco;
    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &n);
    int T [n];
    for (int i=0; i<n; i++) {
        printf("\nPodaj %d element tablicy: ", i+1);
        scanf("%d", &T[i]);
    }
    printf("Wypisuj tablice:\n0 - rosnaco\n1 - malejaco\n... ");
    scanf("%d", &rosnaco);
    printf("Wypisuj tablice od miejsca nr: ");
    scanf("%d", &k);
    if(!rosnaco)
        for(int i=0; i<n; i++) 
            printf("%d ", T[(i+k-1)%n]);
    else
        for(int i=0; i<n; i++) 
            printf("%d ", T[(n+k-i-1)%n]);

    printf("\n");
    return 0;
}