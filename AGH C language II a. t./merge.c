#include <stdio.h>
#include <time.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}


 int merge(int T1[], int n1, int T2[], int n2){
    int T[10];                                      // Korzystam z faktu, że wartości w T1 i T2 są całkowite
    for(int i=0; i<10; i++) T[i] = 0;               // Wobec tego T[i] informuje czy liczba i pojawiła się
    for(int i=0; i<n1; i++) T[T1[i]] = 1;           // w jakiejkolwiek z tablic T1, T2, co rozwiązuje też
    for(int i=0; i<n2; i++) T[T2[i]] = 1;           // sprawę unikatowych elementów
    int n3 = 0;
    for(int i=0; i<10; i++) n3 += T[i];
    int T3[n3];                                     // Końcowa tablica
    for(int i=0, j=0; i<10; i++){
        if(T[i] == 1){
            T3[j] = T[i];
            j ++;
        }
    }
    return n3;
 }


int main (void) {
    srand(time(NULL));
    int n1, n2;
    printf("Rozmiary tablic wynoszą:\nT1: ");
    scanf("%d", &n1);
    printf("T2: ");
    scanf("%d", &n2);
    int T1[n1], T2[n2];

    for (int i=0; i<n1; i++)
        T1[i] = rand()%10;
    for (int i=0; i<n2; i++)
        T2[i] = rand()%10;
    printf("T1: ");
    for(int i=0; i<n1; i++) printf("%d ", T1[i]);
    printf("\nT2: ");
    for(int i=0; i<n2; i++) printf("%d ", T2[i]);
    printf("\n");
    quickSort(T1, 0, n1 - 1);
    quickSort(T2, 0, n2 - 1);
    printf("Odpowiedz na zadanie to: %d", merge(T1, n1, T2, n2));

    printf("\n");
    return 0;
}