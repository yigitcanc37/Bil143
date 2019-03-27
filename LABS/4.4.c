#include <stdio.h>

    float cevrim(float c){
    float f;
    f = c*1.8+32;
    return f;
    }

int main(void) {
    int a;
    float son, c;
    for(a=0;a<3;a++){
        printf("Celcius Degerini Giriniz : ");
        scanf("%f" , &c);
        son = cevrim(c);
        printf("Fahrenheit Degeri : %.2f\n" , son);
    }
	return 0;
}
