#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    // chiedi all'utente di immettere due numeri
    printf("Inserisci un numero\n");
    scanf("%d", &a);

    printf("Inserisci un altro numero\n");
    scanf("%d", &b);

    // calcola la somma e la visualizza
    c = a + b;

    printf("La somma di %d e %d e' %d\n", a, b, c);

    // scrive se la somma è pari o dispari

    if (a % b == 0) {
        puts("La somma è pari");
    } else {
        puts("La somma è dispari");
    }

    // operatore ternario
    (a % b == 0) ? (puts("Pari")) : (puts("Dispari"));

    // test ciclo while

    int k = 0;

    while (k <= 100) {

        (k == 50) ? (printf("Ciao, sono il 50!\n")) : (printf("%d\n", k));

        k++;

    }

    return 0;
}
