#include <stdio.h>

int main(void) {
int arvud[5]; //Massiv viie täisarvu jaoks
int i;
int paarisarvud = 0;
int paarituarvud = 0; 

  printf("Sisesta viis täisarvu:\n"); 

  for (i=0; i < 5; i++) {
        printf("Sisesta arv %d: ", i + 1);
        scanf("%d", &arvud[i]);

    //Kontrolli ka arvud on paaris või paaritud
    if (arvud[i] % 2==0){
      paarisarvud++;
    } else {
      paarituarvud++;
    }
    }

    printf("Sisestatud arvud: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", arvud[i]);
    }

    printf("\n");
    printf("Paarisarvude arv: %d\n", paarisarvud);
    printf("Paaritute arvude arv: %d\n", paarituarvud);
  
  return 0;
}