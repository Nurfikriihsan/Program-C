#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100

typedef struct {
    char judul[50];
    char pengarang[50];
    int tahun;
} Buku;

Buku perpustakaan[MAX_BOOKS];
int jumlahBuku = 0;

void tambahBuku() {
    if (jumlahBuku >= MAX_BOOKS) {
        printf("Kapasitas perpustakaan penuh!\n");
        return;
    }
    printf("Masukkan judul buku: ");
    scanf(" %[^\n]", perpustakaan[jumlahBuku].judul);
    printf("Masukkan pengarang: ");
    scanf(" %[^\n]", perpustakaan[jumlahBuku].pengarang);
    printf("Masukkan tahun terbit: ");
    scanf("%d", &perpustakaan[jumlahBuku].tahun);
    jumlahBuku++;
    printf("Buku berhasil ditambahkan!\n");
}

void tampilkanBuku() {
    if (jumlahBuku == 0) {
        printf("Perpustakaan kosong.\n");
        return;
    }
    printf("Daftar Buku:\n");
    for (int i = 0; i < jumlahBuku; i++) {
        printf("%d. %s oleh %s (%d)\n", i + 1, perpustakaan[i].judul, perpustakaan[i].pengarang, perpustakaan[i].tahun);
    }
}

void cariBuku() {
    char judul[50];
    printf("Masukkan judul buku yang dicari: ");
    scanf(" %[^\n]", judul);
    for (int i = 0; i < jumlahBuku; i++) {
        if (strstr(perpustakaan[i].judul, judul)) {
            printf("Buku ditemukan: %s oleh %s (%d)\n", perpustakaan[i].judul, perpustakaan[i].pengarang, perpustakaan[i].tahun);
            return;
        }
    }
    printf("Buku tidak ditemukan.\n");
}

int main() {
    int pilihan;
    do {
        printf("\n=== Sistem Manajemen Perpustakaan ===\n");
        printf("1. Tambah Buku\n2. Tampilkan Buku\n3. Cari Buku\n4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);
        switch (pilihan) {
            case 1: tambahBuku(); break;
            case 2: tampilkanBuku(); break;
            case 3: cariBuku(); break;
            case 4: printf("Keluar dari sistem.\n"); break;
            default: printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 4);
    return 0;
}
