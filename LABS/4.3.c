#include <stdio.h>

int main(void) {
    int b1, b2;
    printf("Butonlar Acik ise 1, Kapali ise 0 Giriniz...");
    printf("\nButon 1 : ");
    scanf("%d" , &b1);
    printf("\nButon 2 : ");
    scanf("%d" , &b2);
    if(b1==1 || b2==1){
        printf("\nProblem Yok.");
    }
    else
        printf("\n\a!!!ALARM!!!");
	return 0;
}
