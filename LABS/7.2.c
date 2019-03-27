#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float Transform(float C){
    float F = (C*1.8)+32;
    return F;
}

int main(void){
    float Celcius, Fahrenheit;
    char Choice;
    do{
        printf("\nCelcius Derece Degerini Giriniz : ");
        scanf("%f", &Celcius);
        printf("Celcius Degeri : %.2f\n", Celcius);
        Fahrenheit = Transform(Celcius);
        printf("Fahrenheit Degeri : %.2f\n", Fahrenheit);
        printf("\nDevam Etmek Ister Misiniz : ");
        scanf(" %c", &Choice);
    }
    while(Choice==101);
    printf("\nGorusmek Uzere....\n");
	return 0;
}
