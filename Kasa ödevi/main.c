#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

    float odenenPara;
    float urunTutari;


    int paraUstuKurus;
    int kalan;
    int toplamKupur = 0;

    // Kupurler
    int k200TL, k100TL, k50TL ,k20TL, k10TL, k5TL, k1TL;
    int k50Kr, k25Kr, k10Kr, k5Kr, k1Kr;

    char tlEtiketi[] = "TL";
    char kurusEtiketi[] = "Kurus";

    // Ýstedigimiz örnegi calistirmak icin:
    
    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenenPara);    

    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urunTutari);

    printf("\n----------------------------------\n");
    printf("Urun Tutari: %.2f %s\n", urunTutari, tlEtiketi);
    printf("Odenen Para : %.2f %s\n", odenenPara, tlEtiketi);
    printf("----------------------------------\n");

    // Kurus cinsinden olmasi icin sayi x 100
    paraUstuKurus = (int)roundf((odenenPara - urunTutari) * 100.0f);
    kalan = paraUstuKurus;

    printf("Hesaplanan Para Ustu: %.2f %s (%d %s)\n\n", paraUstuKurus / 100.0, tlEtiketi, paraUstuKurus, kurusEtiketi);


    k200TL = kalan / 20000;
    kalan = kalan % 20000;
    toplamKupur = toplamKupur + k200TL;

    k100TL = kalan / 10000;
    kalan = kalan % 10000;
    toplamKupur = toplamKupur + k100TL;

    k50TL = kalan / 5000;
    kalan = kalan % 5000;
    toplamKupur = toplamKupur + k50TL;


    k20TL = kalan / 2000;
    kalan = kalan % 2000;
    toplamKupur = toplamKupur + k20TL;

    k10TL = kalan / 1000;
    kalan = kalan % 1000;
    toplamKupur = toplamKupur + k10TL;

    k5TL = kalan / 500;
    kalan = kalan % 500;
    toplamKupur = toplamKupur + k5TL;

    k1TL = kalan / 100;
    kalan = kalan % 100;
    toplamKupur = toplamKupur + k1TL;

    // Kurus hesaplama
    k50Kr = kalan / 50;
    kalan = kalan % 50;
    toplamKupur = toplamKupur + k50Kr;

    k25Kr = kalan / 25;
    kalan = kalan % 25;
    toplamKupur = toplamKupur + k25Kr;

    k10Kr = kalan / 10;
    kalan = kalan % 10;
    toplamKupur = toplamKupur + k10Kr;

    k5Kr = kalan / 5;
    kalan = kalan % 5;
    toplamKupur = toplamKupur + k5Kr;

    k1Kr = kalan / 1;
    kalan = kalan % 1;
    toplamKupur = toplamKupur + k1Kr;

    printf("--- Verilecek Kupur Detayi ---\n");
    printf("200 %s    : %d adet\n", tlEtiketi, k200TL);
    printf("100 %s    : %d adet\n", tlEtiketi, k100TL);
    printf("50 %s    : %d adet\n", tlEtiketi, k50TL);
    printf("20 %s     : %d adet\n", tlEtiketi, k20TL);
    printf("10 %s     : %d adet\n", tlEtiketi, k10TL);
    printf("5 %s      : %d adet\n", tlEtiketi, k5TL);
    printf("1 %s      : %d adet\n", tlEtiketi, k1TL);
    printf("50 %s  : %d adet\n", kurusEtiketi, k50Kr);
    printf("25 %s  : %d adet\n", kurusEtiketi, k25Kr);
    printf("10 %s  : %d adet\n", kurusEtiketi, k10Kr);
    printf("5 %s   : %d adet\n", kurusEtiketi, k5Kr);
    printf("1 %s   : %d adet\n", kurusEtiketi, k1Kr);

    printf("----------------------------------\n");
    // Verilen kupur sayisi :
    printf("Toplam Verilen Kupur Sayisi: %d\n", toplamKupur);

    return 0;
}
