//Yigit Can Celikoglu
//    141501071
//  23 Haziran 2016
//      23:08
//  Orta Seviye


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char gun[7][10]={"Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", "Pazar"};
char ay[12][10]={"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran", "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
char kavram[4][10]={"yil", "ay", "hafta", "gun"};
int count[12]={31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

int Check(int a, int b){
    int c=0, d=0, e=0;
    if(b==7){
        c+=2;
        d+=3;
    }
    else if(b==12){
        d=c+1;
    }
    else{
        c+=1;
        d=c+2;
    }
    while(a>b){
        printf("Mevcut %sda sadece %d %s vardir. Lutfen tekrar deneyiniz : ", kavram[c], b, kavram[d]);
        scanf("%d", &a);
    }
    return a;
}

int Days(int a){
    int b=0;
    if(a==2){
        b+=28;
    }
    else if(a==4 || a==6 || a==9 || a==11){
        b+=30;
    }
    else{
        b+=31;
    }
    return b;
}

int Count(int a, int b, int c){
    int d;
    d=(((b+((count[a-2])%7))%7)+c)%7;
    return d;
}

int main(void){
    int a, b, c, d, e;
    printf("Mevcut yilin 1.gunu nedir?\n\n 1- Pazartesi\n 2- Sali\n 3- Carsamba\n 4- Persembe\n 5- Cuma\n 6- Cumartesi\n 7- Pazar\n\nGun : ");
    scanf("%d", &a);
    a=Check(a,7);
    printf("\nIlk gunu %s olan bu yilin hangi ayini merak ediyorsunuz?\n\n ", gun[a-1]);
    printf("1- Ocak\t 7- Temmuz\n 2- Subat\t 8- Agustos\n 3- Mart\t 9- Eylul\n 4- Nisan\t 10- Ekim\n 5- Mayis\t 11- Kasim\n 6- Haziran\t 12- Aralik\n\nAy : ");
    scanf("%d", &b);
    b=Check(b,12);
    d=Days(b);
    printf("\n%s ayinin kacinci gununu merak ediyorsunuz? ", ay[b-1]);
    scanf("%d", &c);
    c=Check(c,d);
    e=Count(b,c,a);
    printf("\n%d %s %s gunune denk geliyor.\n", c, ay[b-1], gun[e-2]);
    return 0;
}
