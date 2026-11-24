#include <stdio.h>

int main(void) {
    int stok = 65, budget = 12000000, pilihan, box, tambah, kurang, bagi, total1, total2, jumlah;

    printf("1. melihat persediaan stok\n");
    printf("2. melihat jumlah budget\n");
    printf("3. restok\n");
    printf("4. menambah stok\n");
    printf("5. mengurangi stok\n");
    printf("6. menghitung rata-rata pendapatan\n");
    printf("7. membeli stok\n");
    printf("8. menambah budget\n");
    printf("9. matikan aplikasi\n");
    printf("masukan pilihan anda: ");
    scanf("%d", &pilihan);
    
    if (pilihan == 1) {
        printf("Persediaan stok ada: %d\n", stok);
    } else if (pilihan == 2) {
        printf("Budget tersedia: %d\n", budget);
    } else if (pilihan == 3) {
        printf("Masukan jumlah box: ");
        scanf("%d", &box);
        printf("Masukan jumlah item per box: ");
        scanf("%d", &jumlah);
        total1 = (box * jumlah) + stok;
        printf("Stok setelah restok adalah: %d\n", total1);
    } else if (pilihan == 4) {
        printf("masukan jumlah stok yang ingin ditambah: ");
        scanf("%d", &jumlah);
        tambah = jumlah + stok;
        printf("Stok setelah ditambah adalah: %d\n", tambah);
    } else if (pilihan == 5) {
        printf("masukan jumlah stok yang ingin dikurangi: ");
        scanf("%d", &jumlah);
        kurang = stok - jumlah;
        printf("Stok setelah dikurangi adalah: %d\n", kurang);
    } else if (pilihan == 6) {
        printf("Masukan jumlah didapat bulan ini: ");
        scanf("%d", &jumlah);
        printf("Masukan jumlah hari buka: ");
        scanf("%d", &box);
        if (box == 0) {
            printf("Jumlah hari buka tidak boleh nol.\n");
        } else {
            bagi = jumlah / box;
            printf("Rata-rata pendapatan adalah: %d\n", bagi);
        }
    } else if (pilihan == 7) {
        printf("Masukan jumlah stok yang mau dibeli: ");
        scanf("%d", &box);
        printf("Masukan harga stok: ");
        scanf("%d", &jumlah);
        total2 = budget % (box * jumlah);
        printf("Sisa budget setelah membeli stok adalah: %d\n", total2);
    } else if (pilihan == 8) {
        printf("masukan jumlah budget yang ingin ditambah: ");
        scanf("%d", &jumlah);
        tambah = jumlah + budget;
        printf("Budget setelah ditambah adalah: %d\n", tambah);
    } else if (pilihan == 9) {
        printf("// TERIMA KASIH //\n");
    } else {
        printf("Pilihan tidak valid.\n");
    }
    return 0;
}