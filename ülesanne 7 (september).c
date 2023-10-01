#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NUMBRES 20
#define MIN_NUM 1
#define MAX_NUM 80

int main() {
    int numbrid[NUM_NUMBRES];
    
    // Alusta juhuslike arvude generaatorit
    srand(time(NULL));
    
    // Genereeri 20 unikaalset numbrit vahemikus 1-80
    for (int i = 0; i < NUM_NUMBRES; i++) {
        int uus_number;
        do {
            uus_number = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
            
            // Kontrolli, et numbrit ei korduks
            int kordub = 0;
            for (int j = 0; j < i; j++) {
                if (numbrid[j] == uus_number) {
                    kordub = 1;
                    break;
                }
            }
            
            if (!kordub) {
                numbrid[i] = uus_number;
                break;
            }
        } while (1);
    }
    
    // Sorteeri numbrid kasvavas järjekorras
    for (int i = 0; i < NUM_NUMBRES - 1; i++) {
        for (int j = 0; j < NUM_NUMBRES - i - 1; j++) {
            if (numbrid[j] > numbrid[j + 1]) {
                int temp = numbrid[j];
                numbrid[j] = numbrid[j + 1];
                numbrid[j + 1] = temp;
            }
        }
    }
    
    // Väljasta numbrid
    printf("Keno Loto numbrid:\n");
    for (int i = 0; i < NUM_NUMBRES; i++) {
        printf("%d ", numbrid[i]);
    }
    printf("\n");
    
    return 0;
}