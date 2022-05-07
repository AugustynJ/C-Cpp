#include <stdio.h>

int main() {
    int n, sum, key, counter = 0;
    printf("Enter matrix size: ");
    scanf("%d", &n);
    int T[n][n];
    printf("Enter key value: ");
    scanf("%d", &key);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter number at position:(%d, %d): ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) printf("%2d ", T[i][j]);
    //     printf("\n");
    // }
    printf("\n");
    for(int i =0; i < n;i++){
        for(int j=0; j < n;j++){
            for(int dist=1; dist<=n && i-dist >= 0 && j-dist >=0 && i+dist < n && j+dist < n;dist++){
                sum = 0;
                for(int x=i-dist;x<=i+dist;x++) sum += T[x][j-dist];
                for(int x=i-dist;x<=i+dist;x++) sum += T[x][j+dist];
                for(int y=j-dist+1;y<j+dist;y++) sum += T[i-dist][y];
                for(int y=j-dist+1;y<j+dist;y++) sum += T[i+dist][y];
                if(sum == key){
                    counter++;
                    printf("Found position: %d %d\n", i, j);}
            }
        }
    }
    printf("Sum: %d\n", counter);
    return 0;
}
