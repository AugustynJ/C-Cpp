#include <stdio.h>

int main(void){
    int n, dist;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("Podaj odleglosc: ");
    scanf("%d", &dist);
    printf("%d", n);

    // int n;
    // printf("Podaj n: ");
    // scanf("%d", &n);
    // int T[n][n];
    // for(int i=0; i<n; i++)
    //     for(int j=0; j<n; j++)
    //         T[i][j] = 0;

    // int k=0, w=0, dir=1;
    // for(int i=1; i<=n*n; i++){
    //     // printf("i = %d\n", i);
    //     if(i < 0) break;
    //     T[w][k] = i;
    //     if(dir == 0){
    //         if(w-1 >= 0 && T[w-1][k] == 0) w -= 1;
    //         else {
    //             dir = 1;
    //             // k += 1;
    //         }
    //     }
    //     if(dir == 1){
    //         if(k+1 < n && T[w][k+1] == 0) k += 1;
    //         else {
    //             dir = 2;
    //             w += 1;
    //         }
    //     }
    //     else if(dir == 2){
    //         if(w+1 < n && T[w+1][k] == 0) w += 1;
    //         else{
    //             dir = 3;
    //             k -= 1;
    //         }
    //     }
    //     else if(dir == 3){
    //         if(k-1 >= 0 && T[w][k-1] == 0) k -= 1;
    //         else {
    //             dir = 0;
    //             w -= 1;
    //         }
    //     }
    // } 
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++) printf("%3d ", T[i][j]);
    //     printf("\n");
    // }

    return 0;
}