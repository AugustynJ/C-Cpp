#include <stdio.h>

int main(void){
    int n;
    printf("Enter matrix size: ");
    scanf("%d", &n);
    int T[n+1][n+1];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter numer on position:(%d, %d): ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    for(int i=0; i<n+1; i++) T[n][i] = 1;
    for(int i=0; i<n+1; i++) T[i][n] = 1;

    int global_max=1, curr_max=0, curr_width=0, prev_width=0, x, y;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(T[i][j] == 1) continue;
            prev_width = 999999;
            curr_max = 0;
            for(x = i; T[x][j] == 0; x ++){
                y = j;
                while(T[x][y+1] != 1 && y-j+1 < prev_width) y++;
                curr_width = y-j+1;
                curr_max = curr_width * (x-i+1);
                if(curr_max > global_max) global_max = curr_max;
                prev_width = curr_width;
            }
        }
    }
    printf("%d\n", global_max);
    return 0;
}