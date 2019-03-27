// þifreleme ve þifre kýrma kodu, 24 Mayýs , OH

#include <stdio.h>

int main(){
	int parametre;
	char h1,h2,h3,h4,h5,h6,h7,h8;
	int tercih;
	printf("Sifreleme icin 1e, sifre kirmak icin 2e basin\n");
	scanf("%d", &tercih);
	
	if(tercih==1)
	{
	printf("Sifre parametresi:");
	scanf("%d", &parametre);
	
	printf("Mesaji giriniz(8 harf):");
	scanf(" %c%c%c%c%c%c%c%c", &h1,&h2,&h3,&h4,&h5,&h6,&h7,&h8);
	
	h1=h1+parametre;
	h2=h2+parametre;
	h3=h3+parametre;
	h4=h4+parametre;
	h5=h5+parametre;
	h6=h6+parametre;
	h7=h7+parametre;
	h8=h8+parametre;
	
	printf("Sifreli mesaj:%c%c%c%c%c%c%c%c\n", h1,h2,h3,h4,h5,h6,h7,h8);
}
else
{
	printf("Sifre parametresi:");
	scanf("%d", &parametre);
	
	printf("Kirilmasini istediginiz mesaji giriniz(8 harf):");
	scanf(" %c%c%c%c%c%c%c%c", &h1,&h2,&h3,&h4,&h5,&h6,&h7,&h8);

	
	h1=h1-parametre;
	h2=h2-parametre;
	h3=h3-parametre;
	h4=h4-parametre;
	h5=h5-parametre;
	h6=h6-parametre;
	h7=h7-parametre;
	h8=h8-parametre;
	
	printf("Kirilmis mesaj:%c%c%c%c%c%c%c%c\n", h1,h2,h3,h4,h5,h6,h7,h8);
	
}

return 0;
}



