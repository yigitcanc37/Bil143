// Yigit Can Celikoglu
//     141501071
//   28 Mayis 2016



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int c;

int Random(int a){
    int b;
    srand(time(NULL));
    b = rand()%a;
    return b;
}

void Score(int *b, float ppq){
    float puan;
        c+=*b;
        puan = c*ppq;
        printf("Toplam Puan: %.2f\n",puan);
        printf("*******************************************************************************\n");
}

void Game(int lvl){
    int a, b;
    float ppq;
    a = (((0+Random(lvl))%2)*2)+(1+Random(2));
    printf("Zorluk Derecesi : %d\n", a);
    printf("(Zorluk derecesi, kac adet soru sorulacagini gosterir.)\n");
    printf("*******************************************************************************\n");
    ppq = 100.00/a;
    for(b=0;b<a;b++){
        printf("Soru %d- ", b+1);
        Question(b, a);
    }
}

void Question(int soru, int a){
    int cev;
    float puan, ppq = 100.00/a;
    switch(soru){
        case 0:
            printf("Biberin anavatani neresidir? (Puan: %.2f)\n", ppq);
            printf("1- Meksika\t2- Fransa\n3- Almanya\t4- Ispanya\n");
            break;
        case 1:
            printf("DaVinci'nin Sifresi kitabi nerede gecmektedir? (Puan: %.2f)\n", ppq);
            printf("1- Fransa\t2- Kanada\n3- Londra\t4- Amerika\n");
            break;
        case 2:
            printf("Star Wars filmindeki altin robotun adi ne? (Puan: %.2f)\n", ppq);
            printf("1- C-3PO\t2- R2-D4\n3- BB-8 \t4- R2-D2\n");
            break;
        case 3:
            printf("Bu garip odevinden kac alacak? (Puan: %.2f)\n", ppq);
            printf("1- 110\t2- 50\t3- 100\t4- 25\n");
            break;
    }
    printf("Cevap : ");
    scanf("%d", &cev);
    Answer(cev);
    if(cev==1){
        Score(&cev, ppq);
    }
    else if(cev==2 || cev==3 || cev==4){
        puan = c*ppq;
        printf("Toplam Puan: %.2f\n",puan);
        printf("*******************************************************************************\n");
    }
    else{
        printf("*******************************************************************************\n");
        printf("*******************************************************************************\n");
        printf("Yanlis anlama ama buraya kadar nasil gelmeyi basardin? Hile yapmadin umarim!\n");
    }
 }

void Answer(int cev){
    switch(cev){
        case 1:
            printf("*******************************************************************************\n");
            printf("Dogru Cevap\n");
            break;
        case 2:
            printf("*******************************************************************************\n");
            printf("\a!!!Yanlis Cevap!!!\n");
            break;
        case 3:
            printf("*******************************************************************************\n");
            printf("\a!!!Yanlis Cevap!!!\n");
            break;
        case 4:
            printf("*******************************************************************************\n");
            printf("\a!!!Yanlis Cevap!!!\n");
            break;
    }
}

int main(void) {
	int lvl, menu;
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("**************************** TRIVIA MARATHON v1.8 *****************************\n");
	printf("*********************************** By YCC ************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	printf("Genel kultur bilgime guveniyorum, hazirim diyorsan hadi baslayalim. Ne dersin?\n");
	printf("Baslamak icin 1'e, Cikmak icin 0'a bas : ");
	scanf("%d" , &menu);
	printf("*******************************************************************************\n");
	printf("*******************************************************************************\n");
	if(menu==1){
        printf("Kendine guvenmek iyidir ama yersiz ozguven de hata yaptirir, zarar verir.\n");
        printf("Umarim kendini utandirmaz ve kazanirsin! Oyunun sonunda anlariz zaten.\n");
        printf("Baslamadan once 0'dan 100'e kadar bir zorluk seviyesi sec bakalim : ");
        scanf("%d" , &lvl);
        printf("*******************************************************************************\n");
        if(0<lvl && lvl<=100){
            Game(lvl);
            printf("*******************************************************************************\n");
            printf("*******************************************************************************\n");
            printf("************************** !Umarim Tekrar Gorusuruz! **************************\n");
            printf("*******************************************************************************\n");
            printf("*******************************************************************************\n");
        }
        else
            printf("Sen cok yanlis gelmissin ya. Bu oyun sana gore degilmis zaten.");
            printf("*******************************************************************************\n");
            printf("*******************************************************************************\n");
	}
    else if(menu==0){
        printf("!!!BAK HALA BURADA!!! Korkak adamla isim olmaz. Hadi oyalama beni daha fazla.\n");
        printf("*******************************************************************************\n");
        printf("*******************************************************************************\n");
    }
    else{
        printf("Sen cok yanlis gelmissin ya. Bu oyun sana gore degilmis zaten.\n");
        printf("*******************************************************************************\n");
        printf("*******************************************************************************\n");
	}
	return 0;
}
