#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;

    int hasil_1 = (a == b);
    int hasil_2 = (b > c);
    int hasil_3 = (a != c);

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", hasil_1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", hasil_2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", hasil_3);

    return 0;
}