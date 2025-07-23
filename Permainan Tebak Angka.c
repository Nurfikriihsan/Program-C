#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angka, tebakan, percobaan = 0;
    srand(time(0));
    angka = rand() % 100 + 1;

    printf("=== Permainan Tebak Angka ===\n");
    printf("Tebak angka antara 1 hingga 100!\n");

    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);
        percobaan++;

        if (tebakan < angka) {
            printf("Terlalu kecil!\n");
        } else if (tebakan > angka) {
            printf("Terlalu besar!\n");
        } else {
            printf("Selamat! Anda menebak dalam %d percobaan.\n", percobaan);
        }
    } while (tebakan != angka);

    return 0;
}
