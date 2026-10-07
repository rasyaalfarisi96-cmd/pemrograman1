#include <stdio.h>

int main() {
    int putaran = 5;
    float jarak_km = 14.0;
    float pi = 3.14159265;

    float keliling = jarak_km / putaran;
    float jari_jari = keliling / (2 * pi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak_km);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}