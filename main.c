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

    // calcla la somma e la visualizza
    c = a + b;

    printf("La somma di %d e %d e' %d\n", a, b, c);

    // scrive se la somma è pari o dispari

    if (a % b == 0) {
        puts("La somma è pari");
    } else {
        puts("La somma è dispari");
    }

    return 0;
}
