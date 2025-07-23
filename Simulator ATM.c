#include <stdio.h>

float saldo = 500000;

void cekSaldo() {
    printf("Saldo Anda: %.2f\n", saldo);
}

void tarikTunai() {
    float jumlah;
    printf("Masukkan jumlah penarikan: ");
    scanf("%f", &jumlah);
    if (jumlah <= saldo) {
        saldo -= jumlah;
        printf("Penarikan berhasil! Saldo tersisa: %.2f\n", saldo);
    } else {
        printf("Saldo tidak mencukupi!\n");
    }
}

void setorTunai() {
    float jumlah;
    printf("Masukkan jumlah setor: ");
    scanf("%f", &jumlah);
    saldo += jumlah;
    printf("Setoran berhasil! Saldo saat ini: %.2f\n", saldo);
}

int main() {
    int pilihan;

    do {
        printf("\n=== Simulator ATM ===\n");
        printf("1. Cek Saldo\n2. Tarik Tunai\n3. Setor Tunai\n4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: cekSaldo(); break;
            case 2: tarikTunai(); break;
            case 3: setorTunai(); break;
            case 4: printf("Terima kasih telah menggunakan ATM.\n"); break;
            default: printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 4);

    return 0;
}
