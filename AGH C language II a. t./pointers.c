#include <stdio.h>

int main(void) {
    int T_int[10] = {11, 21, 37, 420, 54, 68, 72, 811, 997, 120};
    float T_float[10] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.1};
    printf("Tablica typu int:\n");
    for(int i=0;i<10;i++){                          // Tradycyjne wypisywanie
        printf("%d. %d ", i+1, T_int[i]);
        printf("%x \n", &T_int[i]);
    }
    printf("Tablica typu float:\n");
    for(int i=0;i<10;i++){                          
        printf("%d. %f ", i+1, T_float[i]);
        printf("%x \n", &T_float[i]);
    }
    printf("\n\n");
    int *p_int = &T_int[0], *p_float = &T_float[0];                                   // Wypisywanie ze wskaźnikami
    printf("Tablica typu int:\n");
    for(int i=0;i<10;i++){                          
        printf("%d. %d ", i+1, *(p_int + i));
        printf("%x \n", p_int+1);
    }
    printf("Tablica typu float:\n");
    for(int i=0;i<10;i++){                          
        printf("%d. %f ", i+1, *(p_float + i));
        printf("%x \n", p_float + i);
    }
    free(*p_int);
    free(*p_float);
    return 0;
}
