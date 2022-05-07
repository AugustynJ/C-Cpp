#include <stdio.h>
#include <time.h>

int main(void){
    int n, dist, inside;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("Podaj odleglosc: ");
    scanf("%d", &dist);

    printf("Czy chcesz wypelnic tablice losowo, czy w sposob wlasny?\n0 - losowo\n1 - wlasny\n... ");
    scanf("%d", &inside);

    int T[n][n];
    if(inside){
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                scanf("%d", &T[i][j]);
    }
    else{
        srand(time(0));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                T[i][j] = rand()%2;

        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ", T[i][j]);

        printf("\n");
        }
        printf("\n\n");
    }


    int res[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            res[i][j] = 0;


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int x = i - dist; x <= i + dist; x++){
                for(int y = j - dist; y <= j + dist; y++){
                    if(x >= 0 && x < n){
                        if(y >= 0 && y < n){
                            res[i][j] += T[x][y];
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ", res[i][j]);

        printf("\n");
    }
    return 0;
}