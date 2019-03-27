#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Faktoriyel(int sayi){
    int son=1;
    while(sayi>1){
        son=son*sayi;
        sayi--;
    }
    return son;
}

int main(void){
    int devam, n;
    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz : ");
    scanf("%d",&n);
    printf("%d Faktoriyel = %d\n",n, Faktoriyel(n));
    printf("Devam etmek icin 1'e basiniz : ");
    scanf("%d",&devam);
    while(devam==1){
        printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz : ");
        scanf("%d",&n);
        printf("%d Faktoriyel = %d\n",n, Faktoriyel(n));
        printf("Devam etmek icin 1'e basiniz : ");
        scanf("%d",&devam);
    }
	return 0;
}
