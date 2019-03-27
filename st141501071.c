#include <stdio.h>

int main(void) {
	int a, b, c, n, t;
	Baslangic_Noktasi :
	    printf("Lütfen 3 Basamakli Sayi Giriniz : ");
	    scanf("%d" , &n);
	    if(99<n && n<1000){
            a = n/100;
            b = n%100/10;
            c = n%10;
            t = a*a + b*b + c*c;
            printf("\nBasamaklarin Kareleri Toplami %d 'dir." , t);
            if(n==t){
                printf("\nBasamaklarin Kareleri Toplami %d Sayisina Esittir." , n);
            }
            else printf("\n\aBasamaklarin Kareleri Toplami %d Sayisina Esit Degildir!" , n);
	    }
	    else if(0<n && n<99 || 1000<n){
            goto Baslangic_Noktasi;
	    }
	    else printf("!!!Hasta La Vista Baby!!!");
	return 0;
}
