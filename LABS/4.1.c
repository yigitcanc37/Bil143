#include <stdio.h>

int main(void) {
    float not1, not2, not3, ort;
    int cr1, cr2, cr3, Tcr;
	printf("1.Dersin Notunu Giriniz : ");
	scanf("%f" , &not1);
	printf("\n1.Dersin Kredisini Giriniz : ");
	scanf("%d" , &cr1);
	printf("\n2.Dersin Notunu Giriniz : ");
	scanf("%f" , &not2);
	printf("\n2.Dersin Kredisini Giriniz : ");
	scanf("%d" , &cr2);
	printf("\n3.Dersin Notunu Giriniz : ");
	scanf("%f" , &not3);
	printf("\n3.Dersin Kredisini Giriniz : ");
	scanf("%d" , &cr3);
	Tcr = cr1+cr2+cr3;
	ort = (not1*cr1+not2*cr2+not3*cr3)/Tcr;
	printf("\nToplam Kredi Sayisi : %d" , Tcr);
    printf("\n\nGenel Ortalama : %.2f" , ort);
	if(Tcr>=60){
        printf("\nSýnýf Geçer.");
	}
	else
        printf("\n\n!!!Kaldi!!!");
	return 0;
}
