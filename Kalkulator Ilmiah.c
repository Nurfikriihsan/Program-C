#include <stdio.h>
#include <math.h>

int main() {
    int pilihan;
    float a, b, hasil;

    do {
        printf("\n=== Kalkulator Ilmiah ===\n");
        printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Sinus\n6. Cosinus\n7. Logaritma\n8. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan angka pertama: ");
            scanf("%f", &a);
            printf("Masukkan angka kedua: ");
            scanf("%f", &b);
        }

        switch (pilihan) {
            case 1: hasil = a + b; printf("Hasil: %.2f\n", hasil); break;
            case 2: hasil = a - b; printf("Hasil: %.2f\n", hasil); break;
            case 3: hasil = a * b; printf("Hasil: %.2f\n", hasil); break;
            case 4:
                if (b != 0) {
                    hasil = a / b;
                    printf("Hasil: %.2f\n", hasil);
                } else {
                    printf("Error: Pembagian dengan nol!\n");
                }
                break;
            case 5:
                printf("Masukkan angka: ");
                scanf("%f", &a);
                printf("Hasil sinus: %.2f\n", sin(a));
                break;
            case 6:
                printf("Masukkan angka: ");
                scanf("%f", &a);
                printf("Hasil cosinus: %.2f\n", cos(a));
                break;
            case 7:
                printf("Masukkan angka: ");
                scanf("%f", &a);
                if (a > 0) {
                    printf("Hasil logaritma: %.2f\n", log(a));
                } else {
                    printf("Error: Logaritma hanya untuk angka positif!\n");
                }
                break;
            case 8: printf("Keluar dari kalkulator.\n"); break;
            default: printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 8);

    return 0;
}
