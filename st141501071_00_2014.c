#include <stdio.h> // Yigit Can Celikoglu 141501071 Code::Blocks

int main(void) {
	int a, b=50, r=100; // sadece sýk secme bilgisi degisken ve kenar uzunlugu ve yaricap bilgileri sabit oldugu icin ondalik kullanmak gereksiz olur dedim.
	float x, y, z, sonuc, sonuc1, sonuc2, sonuc3; // ondalikli bir deger girilirse bile calissin diye float u tercih ettim.1
	printf("1 - Iki boyutlu uzayda cember icerisinde mi?"); // kullanici arayuzunu odevdeki ornek ciktilardan kopyaladim.
	printf("\n2 - Iki boyutlu uzayda kare icerisinde mi?");
	printf("\n3 - Uc boyutlu uzayda kure icerisinde mi?");
	printf("\n4 - Uc boyutlu uzayda kup icerisinde mi?");
	printf("\nLutfen hangi islemi yapmak istediginizi giriniz( 1, 2, 3, 4): \n");
	scanf("%d", &a); // kullanýcýnýn girdigi sýk degeri a degiskenine atanýyor.
	switch(a){
	    case 1:
	        printf("Lutfen noktanin x koordinatini giriniz:");
	        scanf("%f", &x);
	        printf("Lutfen noktanin y koordinatini giriniz:");
	        scanf("%f", &y);
	        sonuc = x*x + y*y - r*r; // 2D bir duzlemdeki cember fonksiyonu
	        printf("sonuc=%.1f", sonuc); // programýn dogru calisip calismadýigýini anlayabilmek icin yazmistim ama hosuma gitti.
	        if(sonuc<0){
                printf("\nEvet");
	        }
	        else printf("\n!!Hayir!!");
	        break;
        case 2:
	        printf("Lutfen noktanin x koordinatini giriniz:");
	        scanf("%f", &x);
	        printf("Lutfen noktanin y koordinatini giriniz:");
	        scanf("%f", &y);
	        sonuc1 = x;
	        sonuc2 = y;
	        if(-b<sonuc1 && sonuc1<b && -b<sonuc2 && sonuc2<b){ // karenin belli bir fonksiyonu olamdigi icin aralik incelemesi yaptirdim.
                printf("\nEvet");
	        }
	        else printf("\n!!Hayir!!");
	        break;
        case 3:
	        printf("Lutfen noktanin x koordinatini giriniz:");
	        scanf("%f", &x);
	        printf("Lutfen noktanin y koordinatini giriniz:");
	        scanf("%f", &y);
	        printf("Lutfen noktanin z koordinatini giriniz:");
	        scanf("%f", &z);
	        sonuc = x*x + y*y + z*z - r*r;
	        printf("sonuc=%.1f", sonuc);
	        if(sonuc<0){
                printf("\nEvet");
	        }
	        else printf("\n!!Hayir!!");
	        break;
        case 4:
	        printf("Lutfen noktanin x koordinatini giriniz:");
	        scanf("%f", &x);
	        printf("Lutfen noktanin y koordinatini giriniz:");
	        scanf("%f", &y);
	        printf("Lutfen noktanin z koordinatini giriniz:");
	        scanf("%f", &z);
	        sonuc1 = x;
	        sonuc2 = y;
	        sonuc3 = z;
	        if(-b<sonuc1 && sonuc1<b && -b<sonuc2 && sonuc2<b && -b<sonuc3 && sonuc3<b){
                printf("\nEvet");
	        }
	        else printf("\n!!Hayir!!");
	        break;
	}
	return 0;
}
