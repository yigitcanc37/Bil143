#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Tahmin(int ust, int alt){
    int tahmin=(ust+alt)/2;
    return tahmin;
}

int main(void){
    int islem,ust=255,alt=0,a=0,sayi;
    printf("%d ile %d arasinda bir sayi tutunuz.\n",alt,ust);
    while(islem!=0 && a<9){
        sayi=Tahmin(ust,alt);
        printf("Tuttugunuz sayi %d ise 0, daha kucukse -1, daha buyukse 1 giriniz : ", sayi);
        scanf("%d",&islem);
        if(islem==1){
            alt=sayi+1;
            a++;
        }
        else if(islem==-1){
            ust=sayi-1;
            a++;
        }
    }
	return 0;
}
