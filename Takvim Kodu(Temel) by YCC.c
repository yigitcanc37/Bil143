//Yigit Can Celikoglu
//    141501071
//  23 Haziran 2016
//      12:54
//  Temel Seviye


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int CountCal(int a, int b){
    int c;
    c=((a+(b%7)-1)%7)-1;
    return c;
}

int main(void){
    int a, b, c;
    char gun[7][10]={"Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", "Pazar"};
    printf("Mevcut ayin 1.gunu nedir?\n\n 1- Pazartesi\n 2- Sali\n 3- Carsamba\n 4- Persembe\n 5- Cuma\n 6- Cumartesi\n 7- Pazar\n\nGun : ");
    scanf("%d", &a);
    printf("\nIlk gunu %s olan bu ayin kacinci gununu merak ediyorsunuz? ", gun[a-1]);
    scanf("%d", &b);
    while(b>30){
        printf("\nMevcut ayda sadece 30 gun vardir. Lutfen tekrar deneyin : ");
        scanf("%d", &b);
    }
    c=CountCal(a,b);
    printf("\nAyin %d.gunu %s gunune denk geliyor.\n", b, gun[c]);
    return 0;
}
