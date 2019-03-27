//Yigit Can Celikoglu
//    141501071
//  1 Haziran 2016
//      19:35

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int Random(int a){
    int b;
    srand(time(NULL));
    b = 0+rand()%a;
    return b;
}

void Delay(float a){
    clock_t son;
    son = clock()+a*CLK_TCK;
    while(clock()<son){}
}

void Love(void){
    int i, j, n=10;
    for(i=n/2; i<=n; i+=2){
        for(j=1; j<n-i; j+=2){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        for(j=1; j<=n-i; j++){
            printf(" ");
            }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n; i>=1; i--){
        for(j=i; j<n; j++){
            printf(" ");
        }
        for(j=1; j<=(i*2)-1; j++){
            printf("*");
        }
        printf("\n");
    }
}

void Comfort(void){
    int a;
    printf("Teselli icin 1'e, Cikmak icin 2'ye basiniz: ");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("\nUzulme artik. Elini sallasan ellisi yani... =)\n");
            break;
        case 2:
            printf("\nBir dahaki sefere gorusmek uzere...\n");
            break;
    }
}

void Count(int a){
    int i, b;
    b = Random(a)%2;
    for(i=1;i<a;i++){
        if((b+i)%2==0){
            printf("Seviyor...[Kalan Yaprak Adedi: %d]\n", a-i);
            Delay(0.5);
        }
        else{
            printf("Sevmiyor...[Kalan Yaprak Adedi: %d]\n", a-i);
            Delay(0.5);
        }
    }
    if((b+a)%2==0){
        printf("Seviyor...\n\n<3<3<3LAAN SEVIYOR BE SENI<3<3<3\nCocugunuza benim adimi verirsiniz artik!! =D\n\n");
        Love();
    }
    else{
        printf("Sevmiyor...\n\n\aBosver sen onu. Olmaz o is...\n\n");
        Comfort();
    }
}

int main(void){
    int yaprak;
	printf("Lutfen Yaprak Sayisini Gir : ");
	scanf("%d" , &yaprak);
	while(1){
            if(yaprak>1){
                Count(yaprak);
                break;
            }
            else if(yaprak==1){
                printf("\aIsi garantiye getirmeye mi calisiyorsun? Sende az degilsin valla... Ama olmaz!\nHadi Yaprak Sayisini Tekrar Gir : ");
                scanf("%d" , &yaprak);
            }
            else if(yaprak==0){
                printf("\aYapraksiz papatya mi olur!!\nLutfen Yaprak Sayisini Tekrar Gir : ");
                scanf("%d" , &yaprak);
            }
            else{
                printf("\aYOK ARTIK!!! Degistir bence sen o papatya'yi yada artik her ne ise onu... =D\nLutfen Yaprak Sayisini Tekrar Gir : ");
                scanf("%d" , &yaprak);
                }
	}
	return 0;
}

