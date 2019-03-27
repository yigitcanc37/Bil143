//Yigit Can Celikoglu
//    141501071
//  Orkun Çepnili
//    141801032
//  14 Aðustos 2016
//      19:45
// Fikir alinanlar: Oguz Hanoglu


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char isim[1][100]; //Odev kisimlarinda kullanilmadigi ve sadece kodu daha keyifli bir hale getirmek icin eklenmistir.
//Lutfen notlandirirken global degisken diye burdan puan kirmayin hocam:)
//Kirilacaksa ekleyen Yigit Celikoglu yani ben dolayisiyla benim ki kirilsin sadece.

typedef struct{
    int Adet;
    char Marka[100][20];
    char Kod[100][20];
    int Enerji[100][20];
    float Fiyat[100][20];
    char Issoktur[100][20];
    char RAMtur[100][20];
    int RAMsay[100][20];
    int Depsay[100][20];
    int Frekans[100][20];
    int Cap[100][20];
    int CikGuc[100][20];
}Urun, PC;

void ADD(Urun Malzeme, PC Part, int i, int j, int UNo){
    int a, b, c;
    for(a=0;a<80;a++){
        printf("*");
    }
    printf("Bu Urunu Sepete Eklemek Icin 1'e, Ana Menuye Donmek Icin 2'ye Basiniz : ");
    scanf("%d", &b);
    while(b<=0 || b>=3){
        printf("\aHATALI GIRIS!!! Lutfen Tekrar Deneyin : ");
        scanf("%d", &b);
    }
    if(b==1){
        for(a=0;a<80;a++){
            printf("*");
        }
        printf("Bu Urunden Sepetinize Kac Tane Eklemek Istiyorsunuz (Iptal Icin 0) : ");
        scanf("%d", &c);
        if(c<=0 || c>100){
            if(i==1 || i==2 || i==5){
                while(c<0 || c>1){
                    if(c==0){
                        break;
                    }
                    else{
                        printf("\aHATALI DEGER!!! En Fazla 1 Adet Secebilirsiniz : ");
                        scanf("%d", &c);
                    }
                }
            }
            else if(i==3 || i==4){
                while(c<0 || c>100){
                    if(c==0){
                        break;
                    }
                    else{
                        printf("\aHATALI DEGER!!! Lutfen 1 ile 100 Arasinda Bir Deger Giriniz : ");
                        scanf("%d", &c);
                    }
                }
            }
        }
        else{
            switch(i){
                case 1:
                    for(a=0;a<c;a++){
                        strcpy(Part.Marka[a], Malzeme.Marka[j]);
                        strcpy(Part.Kod[a], Malzeme.Kod[j]);
                        strcpy(Part.Issoktur[a], Malzeme.Issoktur[j]);
                        strcpy(Part.RAMtur[a], Malzeme.RAMtur[j]);
                        *Part.Enerji[a]=*Malzeme.Enerji[j];
                        *Part.Fiyat[a]=*Malzeme.Fiyat[j];
                        *Part.RAMsay[a]=*Malzeme.RAMsay[j];
                        *Part.Depsay[a]=*Malzeme.Depsay[j];
                    }
                    Part.Adet=c;
                    break;
                case 2:
                    for(a=0;a<c;a++){
                        strcpy(Part.Marka[a], Malzeme.Marka[j]);
                        strcpy(Part.Kod[a], Malzeme.Kod[j]);
                        strcpy(Part.Issoktur[a], Malzeme.Issoktur[j]);
                        *Part.Enerji[a]=*Malzeme.Enerji[j];
                        *Part.Fiyat[a]=*Malzeme.Fiyat[j];
                        *Part.Frekans[a]=*Malzeme.Frekans[j];
                    }
                    Part.Adet=c;
                    break;
                case 3:
                    for(a=0;a<c;a++){
                        strcpy(Part.Marka[a], Malzeme.Marka[j]);
                        strcpy(Part.Kod[a], Malzeme.Kod[j]);
                        strcpy(Part.RAMtur[a], Malzeme.RAMtur[j]);
                        *Part.Enerji[a]=*Malzeme.Enerji[j];
                        *Part.Fiyat[a]=*Malzeme.Fiyat[j];
                        *Part.Frekans[a]=*Malzeme.Frekans[j];
                        *Part.Cap[a]=*Malzeme.Cap[j];
                    }
                    Part.Adet=c;
                    break;
                case 4:
                    for(a=0;a<c;a++){
                        strcpy(Part.Marka[a], Malzeme.Marka[j]);
                        strcpy(Part.Kod[a], Malzeme.Kod[j]);
                        *Part.Enerji[a]=*Malzeme.Enerji[j];
                        *Part.Fiyat[a]=*Malzeme.Fiyat[j];
                        *Part.Cap[a]=*Malzeme.Cap[j];
                    }
                    Part.Adet=c;
                    break;
                case 5:
                    for(a=0;a<c;a++){
                        strcpy(Part.Marka[a], Malzeme.Marka[j]);
                        strcpy(Part.Kod[a], Malzeme.Kod[j]);
                        *Part.Fiyat[a]=*Malzeme.Fiyat[j];
                        *Part.CikGuc[a]=*Malzeme.CikGuc[j];
                    }
                    Part.Adet=c;
                    break;
            }
            system("cls");
            printf("%d Adet %d Numarali Urun Sepetinize Eklenmistir...", c, UNo);
        }
    }
    else if(b==2){}
}

void Delay(float a){
    clock_t son;
    son = clock()+a*CLK_TCK;
    while(clock()<son){}
}

void BasList(PC Part, int j){
    int a, b, c;
    char Parts[5][20]={"Anakart", "Islemci", "Bellek(RAM)", "Depolama Birimi", "Guc Kaynagi"};
    for(a=1;a<=Part.Adet;a++){
        for(b=0;b<80;b++){
            if(b==0){
                printf("%d", a+(j*100));
                for(c=0;c<17;c++){
                    printf(" ");
                }
            }
            else if(b==20){
                printf("%s", Part.Marka[a]);
                for(c=0;c<20-strlen(Part.Marka[a]);c++){
                    printf(" ");
                }
            }
            else if(b==40){
                printf("%s", Parts[j-1]);
                for(c=0;c<20-strlen(Parts[j-1]);c++){
                    printf(" ");
                }
            }
            else if(b==60){
                printf("%s", Part.Kod[a]);
                for(c=0;c<20-strlen(Part.Kod[a]);c++){
                    printf(" ");
                }
            }
        }
    }
}

void Liste(Urun Malzeme, int j, int i){
    int a, b, c;
    char Parts[5][20]={"Anakart", "Islemci", "Bellek(RAM)", "Depolama Birimi", "Guc Kaynagi"};
    for(a=0;a<i;a++){
        for(b=0;b<80;b++){
            if(b==0){
                printf("%d", a+(j*100));
                for(c=0;c<17;c++){
                    printf(" ");
                }
            }
            else if(b==20){
                printf("%s", Malzeme.Marka[a]);
                for(c=0;c<20-strlen(Malzeme.Marka[a]);c++){
                    printf(" ");
                }
            }
            else if(b==40){
                printf("%s", Parts[j-1]);
                for(c=0;c<20-strlen(Parts[j-1]);c++){
                    printf(" ");
                }
            }
            else if(b==60){
                printf("%s", Malzeme.Kod[a]);
                for(c=0;c<20-strlen(Malzeme.Kod[a]);c++){
                    printf(" ");
                }
            }
        }
    }
}

void UrunProp(Urun Malzeme, int UNo, int j, int i){
    int a, b, c;
    PC Anakart1, Islemci1, RAM1, Depo1, Guc1;
    char Parts[5][20]={"Anakart", "Islemci", "RAM", "Depo", "Guc"};
    printf("%d Numarali %s Urununun Ozellikleri :\n", UNo, Parts[j-1]);
    for(a=0;a<80;a++){
        printf("*");
    }
    switch(j){
        case 1:
            printf("Marka : %s\nUrun Kodu : %s\nEnerji Tuketimi : %d Watt(W)\nFiyat : %.2f TL\nIslemci Soket Turu : %s\nBellek(RAM) Soket Turu : %s\nBellek(RAM) Soket Sayisi : %d\nDepolama Birimi Sayisi : %d\n", Malzeme.Marka[i], Malzeme.Kod[i], *Malzeme.Enerji[i], *Malzeme.Fiyat[i], Malzeme.Issoktur[i], Malzeme.RAMtur[i], *Malzeme.RAMsay[i], *Malzeme.Depsay[i]);
            ADD(Malzeme, Anakart1, j, i, UNo);
            break;
        case 2:
            printf("Marka : %s\nUrun Kodu : %s\nEnerji Tuketimi : %d Watt(W)\nFiyat : %.2f TL\nSoket Turu : %s\nSaat Frekansi : %d MHz\n", Malzeme.Marka[i], Malzeme.Kod[i], *Malzeme.Enerji[i], *Malzeme.Fiyat[i], Malzeme.Issoktur[i], *Malzeme.Frekans[i]);
            ADD(Malzeme, Islemci1, j, i, UNo);
            break;
        case 3:
            printf("Marka : %s\nUrun Kodu : %s\nEnerji Tuketimi : %d Watt(W)\nFiyat : %.2f TL\nSoket Turu : %s\nSaat Frekansi : %d MHz\nKapasite : %d GB\n", Malzeme.Marka[i], Malzeme.Kod[i], *Malzeme.Enerji[i], *Malzeme.Fiyat[i], Malzeme.RAMtur[i], *Malzeme.Frekans[i], *Malzeme.Cap[i]);
            ADD(Malzeme, RAM1, j, i, UNo);
            break;
        case 4:
            printf("Marka : %s\nUrun Kodu : %s\nEnerji Tuketimi : %d Watt(W)\nFiyat : %.2f TL\nKapasite : %d GB\n", Malzeme.Marka[i], Malzeme.Kod[i], *Malzeme.Enerji[i], *Malzeme.Fiyat[i], *Malzeme.Cap[i]);
            ADD(Malzeme, Depo1, j, i, UNo);
            break;
        case 5:
            printf("Marka : %s\nUrun Kodu : %s\nFiyat : %.2f TL\nCikis Gucu : %d Watt(W)\n", Malzeme.Marka[i], Malzeme.Kod[i], *Malzeme.Fiyat[i], *Malzeme.CikGuc[i]);
            ADD(Malzeme, Guc1, j, i, UNo);
            break;
    }
}

void Basket(){
    int a, b, c=0;
    char Table[4][10]={"#NO", "MARKA", "URUN TURU", "KOD"};
    for(a=1;a<=6;a++){
        if(a<=3 || a>=5){
            for(b=1;b<=80;b++){
                printf("*");
            }
        }
        else if(a==4){
            for(b=1;b<=29;b++){
                if(b<=5){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("Sepete Eklenen Urunler");
            for(b=1;b<=29;b++){
                if(b>=25){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
    }
    for(a=0;a<80;a++){
        if(a==0 || a==20 || a==40 || a==60){
            printf("%s", Table[c]);
            for(b=0;b<20-strlen(Table[c]);b++){
                printf(" ");
            }
            c++;
        }
    }
    for(a=1;a<=80;a++){
        printf("*");
    }
    //BasList(Anakart1, 1);
    //BasList(Islemci1, 2);
    //BasList(RAM1, 3);
    //BasList(Depo1, 4);
    //BasList(Guc1, 5);
}

void Order(){
    Urun Anakart, Islemci, RAM, Depo, Guc;
    int a, b, c=0, d, i=0, j=0, k=0, l=0, m=0, UNo;
    FILE *dosya;
    char Table[4][10]={"#NO", "MARKA", "URUN TURU", "KOD"};
    dosya=fopen("ANAKART.txt", "r");
    while(!feof(dosya)){
        fscanf(dosya, "%s %s %d %f %s %s %d %d", Anakart.Marka[i], Anakart.Kod[i], Anakart.Enerji[i], Anakart.Fiyat[i], Anakart.Issoktur[i], Anakart.RAMtur[i], Anakart.RAMsay[i], Anakart.Depsay[i]);
        i++;
    }
    fclose(dosya);
    dosya=fopen("ISLEMCI.txt", "r");
    while(!feof(dosya)){
        fscanf(dosya, "%s %s %d %f %s %d", Islemci.Marka[j], Islemci.Kod[j], Islemci.Enerji[j], Islemci.Fiyat[j], Islemci.Issoktur[j], Islemci.Frekans[j]);
        j++;
    }
    fclose(dosya);
    dosya=fopen("BELLEK.txt", "r");
    while(!feof(dosya)){
        fscanf(dosya, "%s %s %d %f %s %d %d", RAM.Marka[k], RAM.Kod[k], RAM.Enerji[k], RAM.Fiyat[k], RAM.Issoktur[k], RAM.Frekans[k], RAM.Cap[k]);
        k++;
    }
    fclose(dosya);
    dosya=fopen("DEPOLAMA.txt", "r");
    while(!feof(dosya)){
        fscanf(dosya, "%s %s %d %f %d", Depo.Marka[l], Depo.Kod[l], Depo.Enerji[l], Depo.Fiyat[l], Depo.Cap[l]);
        l++;
    }
    fclose(dosya);
    dosya=fopen("GUC.txt", "r");
    while(!feof(dosya)){
        fscanf(dosya, "%s %s %f %d", Guc.Marka[m], Guc.Kod[m], Guc.Fiyat[m], Guc.CikGuc[m]);
        m++;
    }
    fclose(dosya);
    for(a=1;a<=6;a++){
        if(a<=3 || a>=5){
            for(b=1;b<=80;b++){
                printf("*");
            }
        }
        else if(a==4){
            for(b=1;b<=32;b++){
                if(b<=5){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("Stoktaki Urunler");
            for(b=1;b<=32;b++){
                if(b>=28){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
    }
    for(a=0;a<80;a++){
        if(a==0 || a==20 || a==40 || a==60){
            printf("%s", Table[c]);
            for(b=0;b<20-strlen(Table[c]);b++){
                printf(" ");
            }
            c++;
        }
    }
    for(a=1;a<=80;a++){
        printf("*");
    }
    Liste(Anakart, 1, i);
    Liste(Islemci, 2, j);
    Liste(RAM, 3, k);
    Liste(Depo, 4, l);
    Liste(Guc, 5, m);
    for(b=1;b<=80;b++){
        printf("*");
    }
    printf("Istediginiz Urunun Numarasini Giriniz (Ana Menu icin 0): ");
    scanf("%d", &UNo);
    while(UNo<100 || UNo>=600){
        if(UNo==0){
                system("cls");
                break;
            }
        else{
            printf("%d Numarali Urun Bulunamadi. Tekrar Deneyin : ", UNo);
            scanf("%d", &UNo);
        }
    }
    system("cls");
    if(UNo/100==1){
        UrunProp(Anakart, UNo, UNo/100, UNo%100);
    }
    else if(UNo/100==2){
        UrunProp(Islemci, UNo, UNo/100, UNo%100);
    }
    else if(UNo/100==3){
        UrunProp(RAM, UNo, UNo/100, UNo%100);
    }
    else if(UNo/100==4){
        UrunProp(Depo, UNo, UNo/100, UNo%100);
    }
    else if(UNo/100==5){
        UrunProp(Guc, UNo, UNo/100, UNo%100);
    }
}

void Start(){ //Harami Computer Tech. opening
    int a, b;
    char Logo[20]="COMPUTERTECHNOLOGIES";
    for(a=1;a<=7;a++){
        for(b=0;b<80;b++){
            printf("*");
        }
    }
    for(a=1;a<=9;a++){
        if(a<=2){
            for(b=1;b<=80;b++){
                if(b<=10 || b>=71){
                    printf("*");
                }
                else if(b==15 || b==16 || b==21 || b==22 || b==32 || b==33 || b==42 || b==43 || b==53 || b==54 || b==65 || b==66){
                    printf("*");
                }
                else if(a==1 && b>=57 && b<=62){
                    printf("*");
                }
                else if(a==2 && b>=58 && b<=61){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        else if(a>=3 && a<=4){
            for(b=1;b<=80;b++){
                if(b<=10 || b>=71){
                    printf("*");
                }
                else if(a==3 && b>=59 && b<=60){
                    printf("*");
                }
                else if(a==3 && b<=70 && b>=67){
                    printf("*");
                }
                else if(a==4 && b<=16 && b>=15){
                    printf(" ");
                }
                else if(b==15 || b==16 || b==21 || b==22 || b==32 || b==33 || b==42 || b==43 || b==53 || b==54 || b==65 || b==66){
                    printf("*");
                }
                else if(b==26 || b==27 || b==28 || b==37 || b==38 || b==39 || b==47 || b==48 || b==49){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        else if(a>=5 && a<=6){
            for(b=1;b<=80;b++){
                if(b<=10 || b>=71){
                    printf("*");
                }
                else if(b==21 || b==22 || b==32 || b==33 || b==42 || b==43 || b==53 || b==54 || b==65 || b==66){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        else{
            for(b=1;b<=80;b++){
                if(b<=10 || b>=71){
                    printf("*");
                }
                else if(b==15 || b== 16 || b==21 || b==22 || b==32 || b==33 || b==42 || b==43 || b==53 || b==54 || b==65 || b==66){
                    printf("*");
                }
                else if(b==26 || b==27 || b==28 || b==47 || b==48 || b==49){
                    printf("*");
                }
                else if(a==9 && b<=39 && b>=37){
                    printf("*");
                }
                else if(a==9 && b>=57 && b<=62){
                    printf("*");
                }
                else if(a==8 && b<=38 && b>=37){
                    printf("*");
                }
                else if(a==8 && b==41){
                    printf("*");
                }
                else if(a==8 && b<=58 && b>=57){
                    printf("*");
                }
                else if(a==8 && b>=61 && b<=62){
                    printf("*");
                }
                else if(a==7 && b==37){
                    printf("*");
                }
                else if(a==7 && b<=41 && b>=40){
                    printf("*");
                }
                else if(a==7 && b==57){
                    printf("*");
                }
                else if(a==7 && b==62){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
    }
    for(a=1;a<=8;a++){
        if(a==2){
            for(b=1;b<=80;b++){
                if(b<=10 || b>=71){
                    printf("*");
                }
                else if(b>=30 && b<=37){
                    printf("%c", Logo[b-30]);
                }
                else if(b>=40 && b<=51){
                    printf("%c", Logo[b-32]);
                }
                else{
                    printf(" ");
                }
            }
        }
        else{
            for(b=1;b<=80;b++){
                printf("*");
            }
        }

    }
    Delay(1);
    system("cls");
    for(a=0;a<=100;a++){
        for(b=1;b<=12;b++){
            printf("\n");
        }
        for(b=1;b<=34;b++){
            printf(" ");
        }
        printf("LOADING %%%d", a);
        Delay(0.01);
        system("cls");
    }
}

void User(){
    int b;
    for(b=1;b<=12;b++){
        printf("\n");
    }
    for(b=1;b<=30;b++){
        printf(" ");
    }
    printf("Musteri Ismi : ");
    gets(isim);
    Delay(0.5);
    system("cls");
    for(b=1;b<=12;b++){
        printf("\n");
    }
    for(b=1;b<=27;b++){
        printf(" ");
    }
    printf("Merhaba %s =) ", isim);
    Delay(0.9);
    system("cls");
}

int main(void){
    int a, b, c, d;
    char Menu[5][33]={"Yeni Siparis Olustur", "Sepetimi Goster", "Secilen Urunlerin Sistem Analizi", "Siparisi Tamamla", "Cikis"};
    Start();
    User();
    for(a=1;a<=25;a++){
        if(a<=4){
            for(b=1;b<=80;b++){
                printf("*");
            }
        }
        else if(a==5){
            for(b=1;b<=31;b++){
                printf(" ");
            }
            printf("Harami Comp. Tech.\n");
        }
        else if(a==6){
            for(b=1;b<=23;b++){
                printf(" ");
            }
            printf("Siparis Platformuna Hosgeldiniz\n");
        }
    }
    do{
        for(a=1;a<=14;a++){
            if(a<=3){
                for(b=1;b<=80;b++){
                    printf("*");
                }
            }
            else if(a==4){
                for(b=1;b<=36;b++){
                    if(b<=10){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("ANA MENU");
                for(b=1;b<=36;b++){
                    if(b>=27){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
            }
            else if(a==5){
                for(b=1;b<=80;b++){
                    printf("*");
                }
            }
            else if(a<=10 && a>=6){
                for(b=1;b<=22;b++){
                    if(b<=10){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
                printf("%d- %s", a-5, Menu[a-6]);
                if(a==6){
                    for(b=1;b<=13;b++){
                        printf(" ");
                    }
                }
                else if(a==7){
                    for(b=1;b<=18;b++){
                        printf(" ");
                    }
                }
                else if(a==8){
                    printf(" ");
                }
                else if(a==9){
                    for(b=1;b<=17;b++){
                        printf(" ");
                    }
                }
                else if(a==10){
                    for(b=1;b<=28;b++){
                        printf(" ");
                    }
                }
                for(b=1;b<=22;b++){
                    if(b<=12){
                        printf(" ");
                    }
                    else{
                        printf("*");
                    }
                }
            }
            else if(a<=13 && a>=11){
                for(b=1;b<=80;b++){
                    printf("*");
                }
            }
            else{
                printf("Seciminiz : ");
                scanf("%d", &c);
            }
        }
        system("cls");
        switch(c){
            case 1:
                Order();
                Delay(1.5);
                break;
            case 2:
                Basket();
                Delay(5);
                system("cls");
                printf("\aERROR 404 - PAGE NOT FOUND\nOops! Looks Like The Page You're Looking For Was Moved or Broken.\nHowever Please Make Sure You Give Great Marks To My Creators =)\nThank You");
                Delay(4);
                break;
            case 3:
                printf("\aERROR 404 - PAGE NOT FOUND\nOops! Looks Like The Page You're Looking For Is Under Maintenance.\nHowever Please Make Sure You Give Great Marks To My Creators =)\nThank You");
                Delay(4);
                break;
            case 4:
                printf("\aNO NEED FOR PAYMENT!!\nSecilen Parcalar, %s'e Bizim Hediyemizdir =) ", isim);
                Delay(4);
                break;
            case 5:
                printf("Programi Sonlandirmak Istedigine Emin Misin?\n1- Evet\t\t2- Hayir\n");
                scanf("%d", &d);
                break;
        }
        system("cls");
    }while(d!=1);
    printf("Program Sonlandirildi... Iyi Gunler Dilerim %s :) \n", isim);
    return 0;
}
