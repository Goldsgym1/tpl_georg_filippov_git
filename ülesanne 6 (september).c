#include <stdio.h>
#include <math.h>

int main() {
    int hinded[5];
    int summa = 0;
    
    // Sisesta degusteerijate hinded
    printf("Sisesta degusteerija hinded 10-palli süsteemis:\n");
    for (int i = 0; i < 5; i++) {
        printf("Degusteerija %d hinne: ", i + 1);
        scanf("%d", &hinded[i]);
        summa += hinded[i];
    }
    
    // Leia keskmine hinne
    double keskmine = (double)summa / 5;
    
    // Leia degusteerija, kelle hinne erineb keskmisest kõige rohkem
    int max_erinevus = 0;
    int indeks = 0;
    for (int i = 0; i < 5; i++) {
        int erinevus = abs(hinded[i] - keskmine);
        if (erinevus > max_erinevus) {
            max_erinevus = erinevus;
            indeks = i;
        }
    }
    
    // Väljasta tulemused
    printf("Keskmine hinne: %.2f\n", keskmine);
    printf("Degusteerija %d hindes erineb keskmisest kõige rohkem.\n", indeks + 1);
    
    return 0;
}