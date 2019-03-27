#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    float a, b, toplam;
    while(a>=0){
        printf("Bir Sayi Giriniz : ");
        scanf("%f",&a);
        toplam+=a;
        b++;
    }
    printf("Ortalama = %.2f", (toplam-a)/(b-1));
	return 0;
}
