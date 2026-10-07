#include <stdio.h>

int main() {
    int harga_sepatu_a = 400000;
    int harga_sepatu_b = 350000;
    int diskon_a = 13;
    int diskon_b = 21;

    float harga_akhir_a = harga_sepatu_a - ((float)harga_sepatu_a * diskon_a / 100);
    float harga_akhir_b = harga_sepatu_b - ((float)harga_sepatu_b * diskon_b / 100);

    printf("Harga sepatu A adalah %d\n", harga_sepatu_a);
    printf("Harga sepatu B adalah %d\n", harga_sepatu_b);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %.0f\n", diskon_a, harga_akhir_a);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %.0f\n", diskon_b, harga_akhir_b);

    return 0;
}