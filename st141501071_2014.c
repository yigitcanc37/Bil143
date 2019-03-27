#include <stdio.h> // Yigit Can Celikoglu 141501071 Code::Blocks

int main(void) {
    system("color a"); // Matrix'i severiz:D
    int secim, n=15, j, i; // sik secimleri ve kum saati sekli icin
	float D, B, tD, tB, tM, v=72, v1, v2, v3; // D - Dolduran muslugun havuzu doldurma suresi
	// B - Bosaltan muslugun havuzu bosaltma suresi
	// tD - Dolduran muslugun dakikada doldurdugu birim hacim
	// tB - Bosaltan muslugun dakikada bosaltigi birim hacim
	// tM - Musluklarin acik kalma suresi
	// v - toplam hacim v1 - doldurulan hacim v2 - bosaltilan hacim v3 - iki musluk beraber acildiginda dolan hacim
	printf("Lutfen havuzu dolduran muslugun havuzu kac dakikada doldurdugunu giriniz: ");
	scanf("%f" , &D);
	printf("Lutfen havuzu bosaltan muslugun havuzu kac dakikada bosaltigini giriniz: ");
	scanf("%f" , &B);
	printf("\n--------------------------------------------------------------------------------");
	printf("\n1 - Sadece DOLDURAN muslugu AC");
	printf("\n2 - Sadece BOSALTAN muslugu AC");
	printf("\n3 - Iki muslugu ayni anda AC");
	printf("\n4 - !!Programi Sonlandir!!");
	printf("\nLutfen yapmak istediginiz islemi seciniz: ");
	scanf("%d" , &secim);

	switch(secim){
	    case 1:
	        printf("Dolduran musluk kac dakika acik kalsin: ");
	        scanf("%f" , &tM);
	        v1 = (v*tM)/D;
	        if(v1<v){
                printf("Dolu Havuz Hacmi: %.2f birim\n", v1);
	        }
	        else printf("Dolu Havuz Hacmi: %.2f birim\n", v);
	        for(i=1;i<=n;i++){ // Hocam hepsini yaptim sekle kadar ama bir turlu icini bosaltamadim dolayisiyla ic doldurmayi da yapamadim
	            // Kodun kalanýnda da sekiller burdaki gibi hatta dolan tarzda yapamadigim icin sonuc ne olursa olsun ayni sekli verdirttim kodu uzatmayim diye
                for(j=1;j<i;j++){
                    printf(" ");
                }
                for(j=0;j<=n-i;j++){
                    printf("* ");
                }
                printf("\n");
	        }
	        for(i=1;i<n;i++){
                for(j=1;j<n-i;j++){
                    printf(" ");
                }
                for(j=0;j<=i;j++){
                    printf("* ");
                }
                printf("\n");
	        }
	        break;
        case 2:
            printf("Bosaltan musluk kac dakika acik kalsin: ");
	        scanf("%f" , &tM);
	        v1 = (v*tM)/B;
	        v2 = v - v1;
	        if(v2<0){
                printf("Dolu Havuz Hacmi: 0.00 birim\n");
	        }
	        else printf("Dolu Havuz Hacmi: %.2f birim\n", v2);
	        for(i=1;i<=n;i++){
                for(j=1;j<i;j++){
                    printf(" ");
                }
                for(j=0;j<=n-i;j++){
                    printf("* ");
                }
                printf("\n");
	        }
	        for(i=1;i<n;i++){
                for(j=1;j<n-i;j++){
                    printf(" ");
                }
                for(j=0;j<=i;j++){
                    printf("* ");
                }
                printf("\n");
	        }
	        break;
        case 3:
            printf("Musluklar kac dakika acik kalsin: ");
            scanf("%f" , &tM);
            tD = v/D;
            tB = v/B;
            v1 = tD*tM;
            v2 = tB*tM;
            v3 = v1 - v2;
            printf("Dolu Havuz Hacmi: %.2f birim\n", v3);
            for(i=1;i<=n;i++){
                for(j=1;j<i;j++){
                    printf(" ");
                }
                for(j=0;j<=n-i;j++){
                    printf("* ");
                }
                printf("\n");
	        }
	        for(i=1;i<n;i++){
                for(j=1;j<n-i;j++){
                    printf(" ");
                }
                for(j=0;j<=i;j++){
                    printf("* ");
                }
                printf("\n");
	        }
            break;
        case 4:
            printf("May The Force Be With You\n"); // Star Wars'uda severiz:)
            break;
}
	return 0;
}
