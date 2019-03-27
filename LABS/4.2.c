#include <stdio.h>

int main(void) {
    int tut, ver, art;
    int b100, b50, b20, b10, b5, b1;
    printf("Alisveris Tutarinizi Giriniz : ");
    scanf("%d" , &tut);
    printf("\nOdenen Miktari Giriniz : ");
    scanf("%d" , &ver);
    art = tut-ver;
    art = art*(-1);
    if(art>=0){
        b100 = art/100;
        b50 = (art%100)/50;
        b20 = ((art%100)%50)/20;
        b10 = (((art%100)%50)%20)/10;
        b5 = ((((art%100)%50)%20)%10)/5;
        b1 = ((((art%100)%50)%20)%10)%5;
        printf("\nMusteriye Verilecek Paraustu : %d \n" , art);
        printf("\n%d Adet 100TL" , b100);
        printf("\n%d Adet 50TL" , b50);
        printf("\n%d Adet 20TL" , b20);
        printf("\n%d Adet 10TL" , b10);
        printf("\n%d Adet 5TL" , b5);
        printf("\n%d Adet 1TL\n" , b1);
    }
    else
        printf("\n!!!Eksik Para Odendi!!!");
	return 0;
}
